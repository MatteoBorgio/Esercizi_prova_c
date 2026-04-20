#include <stdio.h>
#include <stdlib.h>

void min_max(int *array, int dim, int *min, int *max);

int main() {
    int dimension;
    printf("Inserisci la dimensione dell'array: ");
    scanf("%i", &dimension);
    int *arr = malloc(dimension * sizeof(int));
    int max;
    int min;

    for (int i = 0; i < dimension; i++) {
        int num;
        printf("\nInserisci il %i° numero della lista: ", i + 1);
        scanf("%i", &num);
        *(arr + i) = num;
    }
    min_max(arr, dimension, &min, &max);

    printf("\nIl minimo è: %i", min);
    printf("\nIl massimo è %i\n", max);

    free(arr);

    return 0;
}

void min_max(int *array, int dim, int *min, int *max) {
    *max = array[0];
    *min = array[0];
    for (int i = 1; i < dim; i++) {
        if (array[i] > *max) {
            *max = array[i];
        }
        if (array[i] < *min) {
            *min = array[i];
        }
    }
    return;
}
