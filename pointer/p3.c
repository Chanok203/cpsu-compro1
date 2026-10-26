#include <stdio.h>

void printArr(int* arr, int R, int C) {
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int R = 3, C = 2;
    int map[3][2] = {{5, 8}, {4, 6}, {2, 1}};

    // printf("%d\n", *map);
    printf("%d\n", **map);
}