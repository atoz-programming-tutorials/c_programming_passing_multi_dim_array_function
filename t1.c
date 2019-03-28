#include <stdio.h>

void print_2d_array(int rows, int cols, int *a) {
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            printf("%d ", a[i * cols + j]);
        }
        printf("\n");
    }
}

int main(void) {
    int arr[][4] = {
        {1, 2, 3, 0},
        {4, 5, 6, 7}
    };

    print_2d_array(2, 4, arr[0]);
}
