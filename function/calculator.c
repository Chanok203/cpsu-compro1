// input: a, b, c เป็น int
// output:
// c=1 => a + b
// c=2 => a - b
// c=3 => a * b
// c=4 => a / b

#include <stdio.h>

// function ของการบวก a, b
int plus(int x, int y) {
    return x + y;
}

int minus(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (c == 1)
    {
        printf("%d", plus(a, b));
    }
    else if (c == 2)
    {
        printf("%d", minus(a, b));
    }
    else if (c == 3)
    {
        printf("%d", multiply(a, b));
    }

    return 0;
}