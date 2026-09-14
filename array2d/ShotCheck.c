#include <stdio.h>

int main () {
    int R, C;
    scanf("%d %d", &R, &C);

    int K;
    scanf("%d", &K);

    int r, c;
    int in = 0;
    int out = 0;
    for (int k = 0; k < K; ++k) {
        scanf("%d %d", &r, &c);

        if (r < 1 || R < r || c < 1 || C < c) { 
            out++;
        } else {
            in++;
        }
    }
    printf("%d\n%d\n", in, out);

    return 0;
}
