#include <stdio.h>

int sum_int_digit(int num) {
  int sum = 0;
  if (num < 0) {
    num = -num;
  }
  while (num > 0) {
    sum += num % 10;
    num /= 10;
  }
  return sum;
}

int main() {
  int num;
  printf("Inserisci un numero: ");
  scanf("%i", &num);
  int sum = sum_int_digit(num);
  printf("\nLa somma dei caratteri di %i è: %i\n", num, sum);
  return 0;
}
