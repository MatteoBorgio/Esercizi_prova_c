#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

char **create_matrix(int rows, int cols);
void initialize_matrix(int rows, int cols, char **matrix);
void update_matrix(int row, int col, char symbol, char **matrix);
int get_user_pos(int num);
int get_number(const char *value_name);
void close_matrix(int rows, char **matrix);
void print_matrix(int rows, int cols, char **matrix);
char get_char(void);

const char *ROWS = "righe";
const char *COLS = "colonne";

int main() {
    char symbol;
    int rows = get_number(ROWS);
    int cols = get_number(COLS);
    char **matrix = create_matrix(rows, cols);
    if (matrix == NULL) {
        return 1;
    }
    initialize_matrix(rows, cols, matrix);
    do {
        int row_pos = get_user_pos(rows);
        if (row_pos == -1) {
            break;
        }
        int col_pos = get_user_pos(cols);
        if (col_pos == -1) {
            break;
        }
        symbol = get_char();
        update_matrix(row_pos, col_pos, symbol, matrix);
        print_matrix(rows, cols, matrix);
    } while (true);

    close_matrix(rows, matrix);
    return 0;
}

char get_char(void) {
    char symbol;
    printf("\nInserisci un carattere: ");
    scanf(" %c", &symbol);
    return symbol;
}
void close_matrix(int rows, char **matrix) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

void print_matrix(int rows, int cols, char **matrix) {
    printf("\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }
}

int get_number(const char *value_name) {
    int num;
    do {
        printf("\nInserisci il numero di %s: ", value_name);
        scanf("%i", &num);
    } while (num < 1);
    return num;
}

int get_user_pos(int num) {
    int pos;

    do {
        printf(
            "\nInserisci un numero da 1 a %i (0 per terminare il programma): ",
            num);
        scanf("%d", &pos);
        if (pos == 0) {
            return -1;
        }
    } while (pos < 1 || pos > num);

    return (pos - 1);
}

char **create_matrix(int rows, int cols) {
    char **matrix = malloc(rows * sizeof(char *));
    if (matrix == NULL) {
        return NULL;
    }

    for (int i = 0; i < rows; i++) {
        matrix[i] = malloc(cols * sizeof(char));
        if (matrix[i] == NULL) {
            for (int j = 0; j < i; j++) {
                free(matrix[j]);
            }
            free(matrix);
            return NULL;
        }
    }
    return matrix;
}

void initialize_matrix(int rows, int cols, char **matrix) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = 'N';
        }
    }
}

void update_matrix(int row, int col, char symbol, char **matrix) {
    matrix[row][col] = symbol;
}
