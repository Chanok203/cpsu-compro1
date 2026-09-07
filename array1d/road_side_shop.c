#include <stdio.h>
#include <limits.h>

int main()
{
    int N, K;
    scanf("%d %d", &N, &K);

    int arr[N];
    for (int i = 0; i < N; ++i)
    {
        scanf("%d", &arr[i]);
    }

    int maxPop = INT_MIN;
    for (int i = 0; i < N; ++i)
    {
        int left;
        if (i - K < 0)
        {
            left = 0;
        }
        else
        {
            left = i - K;
        }

        int right;
        if (i + K > N - 1)
        {
            right = N - 1;
        }
        else
        {
            right = i + K;
        }
        
        int pop = 0;
        for (int j = left; j <= right; ++j) {
            pop = pop + arr[j];
        }

        if (pop > maxPop) {
            maxPop = pop;
        }

        printf("i = %d, L = %d, R = %d, pop = %d\n",i, left, right, pop);
    }
    printf("%d", maxPop);

    return 0;
}