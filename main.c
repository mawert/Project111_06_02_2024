#include <stdio.h>
#include "func.h"

#define rows 3
#define column 4


int main() {
    DArray arr = createDArray(rows, column);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < column; j++) {
            setElement(arr, i, j, i * column + j);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d ", getElement(arr, i, j));
        }
        printf("\n");
    }

    freeDArray(arr);

    return 0;
}