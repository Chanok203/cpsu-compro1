#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    
    if (x <= y)
    {
        int i = x;
        while (i <= y)
        {
            printf("%d ", i);
            i++;
        }
    }
    else
    {
        int i = x;
        while (i >= y)
        {
            printf("%d ", i);
            i--;
        }
    }
    
    /*
    int i = x;
    int j = 1;
    if (x > y) {
        j = -1;
    }

    while (i != y) {
        printf("%d ", i);
        i = i + j;
    }
    printf("%d", i);
    */

    return 0;
}