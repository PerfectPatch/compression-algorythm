#include <stdio.h>

int main(void) {
    int matrix[4][4] = {
        {5, 6, 8, 9},
        {6, 1, 9, 1},
        {8, 10, 1, 9},
        {8, 10, 1, 9}
    };

    int size = sizeof(matrix[0]) / sizeof(matrix[0][0]);
    int product = 1;
    int modulo = size + 1;
    int determinant = 0;

    for (int offset = 0; offset < size; offset++) {
        product = 1;
        for (int col = 0; col < size; col++) {
            if ((col + 1) % modulo != 0) {
                product *= matrix[(col + offset) % size][col];
            }
        }
        determinant += product;
    }

    for (int offset = 0; offset < size; offset++) {
        product = 1;
        for (int col = 0; col < size; col++) {
            if ((col + 1) % modulo != 0) {
                product *= matrix[(col + offset) % size][size - 1 - col];
            }
        }
        determinant -= product;
    }

    printf("%d\n", determinant);
    return 0;
}
