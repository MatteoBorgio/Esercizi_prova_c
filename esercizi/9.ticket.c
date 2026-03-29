#include <stdio.h>

int main() {
  int age;
  printf("Inserisci l'età: ");
  scanf("%d", &age);
  if (age < 10 || age > 80) {
    printf("\nBiglietto gratuito.");
  } else {
    printf("\nIngresso a pagamento.");
  }

  return 0;
}
