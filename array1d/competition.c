#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int team1[N];
    int team2[N];

    for (int i = 0; i < N; ++i) {
        scanf("%d", &team1[i]);
    }

    for (int i = 0; i < N; ++i) {
        scanf("%d", &team2[i]);
    }

    int s1 = 0;
    int s2 = 0;
    for (int i = 0; i < N; ++i) {
        int a = team1[i];
        int b = team2[i];
        if (a > b) {
            s1 += 2;
        } else if (a == b) {
            s1++;
            s2++;
        } else {
            s2 += 2;
        }
    }



    return 0;
}