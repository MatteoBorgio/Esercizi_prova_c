#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_TRY 10

int main() {
  int tried_number, counter = 0;
  printf("Indovina il numero!");
  srand(time(NULL));
  int random_number = (rand() % 100) + 1;
  do {
    printf("\nInserisci un numero: ");
    scanf("%d", &tried_number);
    counter++;
    if (tried_number < random_number) {
      printf("\nTroppo piccolo.");
    }
    if (tried_number > random_number) {
      printf("\nTroppo grande.");
    }
  } while (random_number != tried_number && counter != MAX_TRY);

  if (tried_number == random_number) {
    printf("\nHai indovinato.");
  } else {
    printf("\nTentativi terminati. Il numero era: %d", random_number);
  }
}
