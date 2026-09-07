/*
a = 4
b = 5
c = 8
d = 1
e = 3

1. find max // c = 8
2. วนลูป 8 บรรทัด
    ในแต่ละหลัก ตรวจสอบว่า a,b,c,d,e >= row ? "*": " "
*/

#include <stdio.h>
#include <limits.h>

int main ()
{
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; ++i) {
        scanf("%d", &arr[i]);
    }

    // find maxRow
    int maxRow = INT_MIN;
    for (int i = 0; i < N; ++i) {
        if (arr[i] > maxRow) {
            maxRow = arr[i];
        }
    }

    for (int row = maxRow; row > 0; --row) {
        // printf("row %d: ", row);
        for (int col = 0; col < N; ++col) {
            if (arr[col] >= row) {
                printf("*");
            } else {
                // printf("-");
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}