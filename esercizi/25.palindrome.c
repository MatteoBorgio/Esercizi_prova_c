#include <ctype.h>
#include <stdio.h>
#include <string.h>

int is_palindrome(char *string);

int main() {
    char string[100];
    printf("Scrivi una frase: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';
    if (is_palindrome(string) == 0) {
        printf("\nLa stringa è palindroma.\n");
    } else {
        printf("\nLa stringa non è palindroma.\n");
    }
    return 0;
}

int is_palindrome(char *string) {
    for (int i = 0, len = strlen(string); i < len / 2; i++) {
        char first = toupper(string[i]);
        char last = toupper(string[len - 1 - i]);
        if (first != last) {
            return 1;
        }
    }
    return 0;
}
