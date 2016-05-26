/*
 * 17 - Array printing function
 */
#include <stdio.h>

void printArray(int numElements, int array[numElements]);
void printMatrix(unsigned int numRows, unsigned int numCols, int matrix[numRows][numCols]);

int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6 };
    int mat[3][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 } };
    printf("Array: ");
    printArray(sizeof(arr) / sizeof(arr[0]), arr);
    printf("\nMatrix: \n");
    printMatrix(sizeof(mat) / sizeof(mat[0]), sizeof(mat[0]) / sizeof(mat[0][0]), mat);
    return 0;
}

void printArray(int numElements, int array[numElements]) {
    for (int i = 0; i < numElements; i++)
        printf("%i ", array[i]);
    putchar('\n');
}

void printMatrix(unsigned int numRows, unsigned int numCols, int matrix[numRows][numCols]) {
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++)
            printf("%i\t", matrix[i][j]);
        putchar('\n');
    }
}
