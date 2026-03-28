#include <stdio.h>

int main() {
  int num;
  printf("Inserisci un numero: ");
  scanf("%d", &num);
  if (num % 2 == 0) {
    const int num_divided = num / 2;
    printf("Il numero diviso è: %d", num_divided);
  } else {
    printf("\nIl numero è dispari.");
  }
  return 0;
}
