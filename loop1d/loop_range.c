#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    if (x > y) {
        printf("Invalid input");
        return 0;
    }

    int i = x;
    while (i <= y) {
        printf("%d ", i);
        i++;
    }
    return 0;
}