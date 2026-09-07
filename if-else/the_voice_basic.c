#include <stdio.h>

int main()
{
    int K, K1, K2, S1, S2, G;
    scanf("%d %d %d %d %d %d", &K, &K1, &K2, &S1, &S2, &G);

    // ไม่มีใครเอา (< 9 ทั้งคู่)
    if (S1 < 9 && S2 < 9)
    {
        printf("0");
    }
    // มีทีมเอาแค่ 1 ทีม
    // ทีม 1
    else if (S1 >= 9 && S2 < 9)
    {
        if (K1 < K)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    // ทีม 2
    else if (S1 < 9 && S2 >= 9)
    {
        if (K2 < K)
        {
            printf("2");
        }
        else
        {
            printf("0");
        }
    }
    else
    {
        // if (S1 >= 9 && S2 >= 9)
        if (G == 1)
        { // อยากเข้าทีม 1
            if (K1 < K)
            {
                printf("1");
            }
            else if (K2 < K)
            {
                printf("2");
            }
            else
            {
                printf("0");
            }
        }
        else
        {
            if (K2 < K)
            {
                printf("2");
            }
            else if (K1 < K)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
    }

    printf("\n");

    if (K1 >= K)
    {
        S1 = 0;
    }
    if (K2 >= K)
    {
        S2 = 0;
    }
    int team = 0;
    if (S1 >= 9 && S2 >= 9)
    {
        team = G;
    }
    else if (S1 >= 9)
    {
        team = 1;
    }
    else if (S2 >= 9)
    {
        team = 2;
    }
    printf("%d", team);

    return 0;
}