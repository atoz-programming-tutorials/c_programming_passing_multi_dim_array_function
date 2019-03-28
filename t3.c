#include <stdio.h>
#include <stdlib.h>

// flexible array member
typedef struct {
    int rows;
    int cols;
    int data[];
} Matrix2D;

void print_fma(Matrix2D *a) {
    for(int i = 0; i < a->rows; ++i) {
        for(int j = 0; j < a->cols; ++j) {
            printf("%d ", a->data[i * a->cols + j]);
        }
        printf("\n");
    }
}

int main(void) {
    printf("size of Matrix2D = %zd\n", sizeof(Matrix2D));

    int rows = 0, cols = 0;
    // For production code check the return value of scanf to see if there was an error in the input
    // you should also check for negative values
    printf("rows = ");
    scanf("%d", &rows);
    printf("cols = ");
    scanf("%d", &cols);

    Matrix2D *arr = malloc(sizeof(Matrix2D) + rows * cols * sizeof(int));

    arr->rows = rows;
    arr->cols = cols;

    // Init the flexible array member
    for(int i = 0; i < rows * cols; ++i) {
        arr->data[i] = i;
    }

    print_fma(arr);

    free(arr);
}
