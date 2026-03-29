#include <stdio.h>

int main() {
  int traffic_lights_state;
  printf("Inserire lo stato del semaforo (numero da 0 a 2): ");
  scanf("%d", &traffic_lights_state);
  switch (traffic_lights_state) {
  case 0:
    printf("\nSemaforo verde.");
    break;
  case 1:
    printf("\nSemaforo giallo.");
    break;
  case 2:
    printf("\nSemaforo rosso.");
    break;
  default:
    printf("\nStato non valido.");
    break;
  }

  return 0;
}
