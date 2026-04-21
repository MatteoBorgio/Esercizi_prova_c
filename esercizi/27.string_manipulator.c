#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sub_vocals(char *string);

int main() {
    const int max_length = 100;
    char *string = (char *)malloc(max_length * sizeof(char));
    if (string == NULL) {
        return 1;
    }
    printf("Inserisci una stringa: ");
    fgets(string, max_length, stdin);
    string[strcspn(string, "\n")] = '\0';
    sub_vocals(string);
    printf("\nLa tua parola con le vocali censurate è: %s\n", string);
    free(string);
    return 0;
}

void sub_vocals(char *string) {
    for (int i = 0; string[i] != '\0'; i++) {
        if (tolower(string[i]) == 'a' || tolower(string[i]) == 'e' ||
            tolower(string[i]) == 'i' || tolower(string[i]) == 'o' ||
            tolower(string[i]) == 'u') {
            string[i] = '*';
        }
    }
    return;
}
