#include <stdio.h>

int main() {
    int num1, num2;
    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);
    printf("\nInserisci il secondo numero: ");
    scanf("%d", &num2);
    printf("\nPrimo numero: %d", num1);
    printf("\nSecondo numero: %d", num2);

    if (num1 == num2) {
        printf("\nI due numeri sono uguali");
        return 0;
    }

    if (num1 > num2) {
        const int greater = num1;
        const int minor = num2;
        printf("\nNumero minore: %d", minor);
        printf("\nNumero maggiore: %d", greater);
    } else {
        const int greater = num2;
        const int minor = num1;
        printf("\nNumero minore: %d", minor);
        printf("\nNumero maggiore: %d", greater);
    }

    return 0;
}