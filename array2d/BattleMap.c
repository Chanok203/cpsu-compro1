#include <stdio.h>

int main () {
    int R, C;
    scanf("%d %d", &R, &C);

    int arr[R][C];
    for (int r = 0; r < R; ++r) {
        for (int c = 0; c < C; ++c) {
            scanf("%d", &arr[r][c]);
        }
    }

    int k;
    scanf("%d", &k);

    printf("%d\n", k);
    for (int r = 0; r < R; ++r) {
        for (int c = 0; c < C; ++c) {
            printf("%d ", arr[r][c]);
        }
        printf("\n");
    }

}