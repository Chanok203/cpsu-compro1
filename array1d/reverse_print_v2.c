#include <stdio.h>

int main ()
{
    int N;
    scanf("%d", &N);

    int arr[N];
    // idx: 0 1 2 3 4
    // val: ? ? ? ? ?

    for (int i = 0; i < N; ++i) {
        scanf("%d", &arr[i]);
    }
    // N = 6
    // idx: 0 1 2 3  4 5
    // val:-2 5 7 0 -1 4

    for (int i = 5; i >= 0; --i) {
        printf("%d ", arr[i]);
    }

    return 0;
}