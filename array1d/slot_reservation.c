#include <stdio.h>
#include <limits.h>

int main()
{
    int N, K;
    scanf("%d %d", &N, &K);

    int arr1[N + 1];
    int arr2[N + 1];
    for (int i = 1; i <= N; ++i)
    {
        arr1[i] = 0;
        arr2[i] = 0;
    }

    int P;
    scanf("%d", &P);

    for (int p = 0; p < P; ++p)
    {
        int i;
        scanf("%d", &i);

        if (arr1[i] >= K)
        {
            printf("--> 2");
            arr2[i]++;
        }
        else
        {
            printf("--> 1");
            arr1[i]++;
        }
        printf("\n");
    }

    printf("arr1: ");
    for (int i = 1; i <= N; ++i)
    {
        printf(" %d", arr1[i]);
    }
    printf("\n");
    printf("arr2: ");
    for (int i = 1; i <= N; ++i)
    {
        printf(" %d", arr2[i]);
    }
    
    printf("\n");

    return 0;
}