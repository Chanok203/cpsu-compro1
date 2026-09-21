#include <stdio.h>

int shot(int R, int C, int map[R][C], int r, int c)
{
    /*
        1 = ยิงโดนเรือครั้งแรก
        2 = ยิงน้ำครั้งแรก
        3 = ยิงโดนเรือซ้ำ
        4 = ยิงโดนน้ำซ้ำ
        5 = ยิงนอกกรอบ
    */
    // printf("shot: (%d, %d)", r, c);

    if (r < 0 || R <= r || c < 0 || C <= c)
    {
        return 5;
    }

    if (map[r][c] == 1)
    {
        map[r][c] = 2;
        return 1;
    }

    if (map[r][c] == 2)
    {
        return 3;
    }

    if (map[r][c] == 0)
    {
        map[r][c] = -1;
        return 2;
    }

    return 4;
}

void clearMap(int R, int C, int map[R][C])
{
    for (int r = 0; r < R; ++r)
    {
        for (int c = 0; c < C; ++c)
        {
            map[r][c] = 0;
        }
    }
}

int initMap(int R, int C, int map[R][C])
{
    int nShips = 0;
    for (int r = 0; r < R; ++r)
    {
        for (int c = 0; c < C; ++c)
        {
            scanf("%d", &map[r][c]);
            if (map[r][c] == 1)
            {
                nShips++;
            }
        }
    }
    return nShips;
}

void printMap(int R, int C, int map[R][C])
{
    for (int r = 0; r < R; ++r)
    {
        for (int c = 0; c < C; ++c)
        {
            printf("%d ", map[r][c]);
        }
        printf("\n");
    }
}

int main()
{
    int R, C;
    scanf("%d %d", &R, &C);
    int map[R][C];
    int nShips = initMap(R, C, map);

    int K;
    scanf("%d", &K);
    int counts[6];
    for (int i = 0; i < 6; ++i)
    {
        counts[i] = 0;
    }

    int firstHit = -1;
    int lastHit = -1;

    for (int k = 1; k <= K; ++k)
    {
        int r, c;
        scanf("%d %d", &r, &c);
        r = r - 1;
        c = c - 1;
        int result = shot(R, C, map, r, c);
        counts[result]++;

        if (result == 1)
        {
            nShips--;
            lastHit = k;
            if (firstHit == -1)
            {
                firstHit = k;
            }
        }

        // printf("result = %d\n", result);
        // printMap(R, C, map);
    }

    for (int i = 1; i < 6; ++i)
    {
        printf("%d\n", counts[i]);
    }

    if (nShips > 0)
    {
        printf("battleship %d", firstHit);
    }
    else
    {
        printf("attacker %d", lastHit);
    }

    return 0;
}