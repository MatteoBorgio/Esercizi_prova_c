#include <stdio.h>

int main() {
    int num;
    printf("Inserisci un numero: ");
    scanf("%d", &num);
    if (num >= 0) {
        printf("\nIl numero e' positivo.");
    } else {
        printf("\nIl numero e' negativo.");
    }

    return 0;
}