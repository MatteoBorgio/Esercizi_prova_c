#include <stdio.h>

int main() {
  int num1, num2;
  printf("Inserisci il primo numero: ");
  scanf("%d", &num1);
  printf("\nInserisci il secondo numero: ");
  scanf("%d", &num2);
  const int sum = num1 + num2;
  const int product = num1 * num2;
  const float quotient = (float)num1 / num2;
  const int subtraction = num1 - num2;
  const int module = num1 % num2;
  printf("\n%d + %d = %d", num1, num2, sum);
  printf("\n%d - %d = %d", num1, num2, subtraction);
  printf("\n%d * %d = %d", num1, num2, product);
  printf("\n%d / %d = %f", num1, num2, quotient);
  printf("\n%d %% %d = %d", num1, num2, module);

  return 0;
}
