#include <stdio.h>

int main()
{
    int R, C;
    scanf("%d %d", &R, &C);

    // index start at 1
    int arr[R + 1][C + 1];
    for (int r = 1; r <= R; ++r)
    {
        for (int c = 1; c <= C; ++c)
        {
            scanf("%d", &arr[r][c]);
        }
    }

    int K;
    scanf("%d", &K);

    int r, c;
    int pos = 0, neg = 0, even = 0, odd = 0;
    int prev;
    for (int k = 0; k < K; ++k)
    {
        scanf("%d %d", &r, &c);

        int n;
        // ตรวจสอบตำแหน่งว่าถูกต้องหรือไม่
        int invalidR = (r < 1 || R < r);
        int invalidC = (c < 1 || C < c);
        if (invalidR || invalidC)
        {
            n = prev;
        } else {
            n = arr[r][c];
        }       

        // pos, neg, zero
        if (n > 0) {
            pos++;
        } else if (n < 0) {
            neg++;
        }

        // even, odd
        if (n % 2 == 0) {
            even++;
        } else {
            odd++;
        }
        prev = n;
        // printf("%d %d %d %d\n", pos, neg, even, odd);
    }
    printf("%d %d %d %d\n", pos, neg, even, odd);

    return 0;
}