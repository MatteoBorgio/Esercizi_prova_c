#include <stdio.h>

int main() {
  int sides;
  printf("Inserisci il numero di lati: ");
  scanf("%d", &sides);
  switch (sides) {
  case 3:
    printf("\nIl poligono e' un triangolo.");
    break;
  case 4:
    printf("\nIl poligono è un quadrilatero.");
    break;
  case 5:
    printf("\nIl poligono è un pentagono.");
    break;
  case 6:
    printf("\nIl poligono è un esagono.");
    break;
  default:
    printf("\nAltro poligono.");
    break;
  }

  return 0;
}
