#include <stdio.h>

int main()
{
    int i, X, N, dist, closet;
    int minDist = -1;

    scanf("%d", &X);

    for (i = 1; i <= 8; ++i)
    {
        scanf("%d", &N);

        dist = X - N;
        if (dist < 0)
        {
            dist = -dist;
        }

        if (minDist == -1 || dist < minDist)
        {
            minDist = dist;
            closet = N;
        }

        // printf("dist = %d, minDist = %d, closet = %d\n", dist, minDist, closet);
    }
    printf("%d", closet);
}