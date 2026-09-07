#include <stdio.h>

int main ()
{
    int N;
    scanf("%d", &N);

    int arr[N+1];
    for (int i = 1; i <= N; ++i) {
        scanf("%d", &arr[i]);
    }

    int X;
    scanf("%d", &X);

    for (int i = 1; i <= N; ++i) {
        if (arr[i] == X) {
            printf("%d ", i);
        }
    }

    return 0;
}