#include <stdio.h>

int main()
{
    int n;
    int max = -1;
    int min = -1;
    for (int i = 1; i <= 8; i++)
    {
        scanf("%d", &n);
        if (n > 0)
        {
            if (n > max)
            {
                max = n;
            }

            if (min == -1 || n < min)
            {
                min = n;
            }
            
        }
    }

    printf("max: %d\n", max);
    printf("min: %d\n", min);    

    return 0;
}