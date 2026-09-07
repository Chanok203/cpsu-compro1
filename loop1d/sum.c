#include <stdio.h>

int main()
{
    int n;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &n);
        sum = sum + n;

        printf("sum = %d", sum);
    }
    return 0;
}