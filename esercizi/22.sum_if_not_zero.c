#include <stdio.h>

int main() {
  int num, sum = 0;
  do {
    printf("\nInserisci un numero (0 per terminare il programma): ");
    scanf("%i", &num);
    sum += num;
  } while (num != 0);

  printf("\nLa somma totale è: %i\n", sum);
  return 0;
}
