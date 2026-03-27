#include <stdio.h>

int main() {
    int num1, num2, num3;
    int max = 0, min = 0, middle = 0;
    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);
    printf("\nInserisci il secondo numero");
    scanf("%d", &num2);
    printf("\nInserisci il terzo numero");
    scanf("%d", &num3);

    if (num1 > num2 && num3 > num2) {
        max = num1;
        min = num2;
        middle = num3;
    }

    if (num1 > num2 && num3 < num2) {
        max = num1;
        min = num3;
        middle = num2;
    }

    if (num2 > num1 && num3 > num1) {
        max = num2;
        min = num1;
        middle = num3;
    }

    if (num2 > num1 && num3 < num1) {
        max = num2;
        min = num3;
        middle = num2;
    }

    if (num3 > num1 && max == num1) {
        max = num3;
        middle = num1;
        min = num2;
    }

    if (num3 > num2 && max == num2) {
        max = num3;
        middle = num2;
        min = num1;
    }

    printf("Numero minore: %d", min);
    printf("\nNumero di mezzo: %d", middle);
    printf("\nNumero maggiore: %d", max);
}