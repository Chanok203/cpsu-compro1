#include <stdio.h>
#include <limits.h>

int main()
{
    int N, K;
    scanf("%d %d", &N, &K);

    int arr[N+1];
    for (int i = 1; i <= N; ++i) {
        arr[i] = 0;
    }

    for (int k = 0; k < K; ++k) {
        int i;
        scanf("%d", &i);
        arr[i] += 1;
    }

    int max = INT_MIN;
    int argmax;
    for (int i = 1; i <= N; ++i) {
        if (arr[i] > max) {
            max = arr[i];
            argmax = i;
        }
    }
    printf("%d\n%d", argmax, max);
    return 0;
}