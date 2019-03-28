#include <stdio.h>
#include <stdlib.h>

void print_2d_array(int rows, int cols, int **a) {
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            printf("%d ", a[i][j]);
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

    int **arr = malloc(rows * sizeof(int*));
    for(int i = 0; i < rows; ++i) {
        arr[i] = malloc(cols * sizeof(int));
    }

    // Init the array
    for(int i = 0, kk = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            arr[i][j] = kk;
            kk++;
        }
    }

    print_2d_array(rows, cols, arr);

    // free the allocated memory 
    for(int i = 0; i < rows; ++i) {
        free(arr[i]);
    }
    free(arr);


}
