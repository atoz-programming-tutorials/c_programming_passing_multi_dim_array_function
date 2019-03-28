#include <stdio.h>
#include <stdlib.h>

void print_2d_array(int rows, int cols, int *a) {
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            printf("%d ", a[i * cols + j]);
        }
        printf("\n");
    }
}

int main(void) {
    

    int rows = 0, cols = 0;
    // For production code check the return value of scanf to see if there was an error in the input
    // you should also check for negative values
    printf("rows = ");
    scanf("%d", &rows);
    printf("cols = ");
    scanf("%d", &cols);

    int *arr  = malloc(rows * cols * sizeof(int));
    if(!arr) {
        printf("Unable to allocate memory for the array\n");
        exit(1);
    }

    // Initialize the array
    for(int i = 0; i < rows * cols; ++i) {
        arr[i] = i;
    }

    print_2d_array(rows, cols, arr);

    free(arr);
}
