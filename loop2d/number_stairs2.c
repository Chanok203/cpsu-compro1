#include <stdio.h>

int main()
{
    int arr[500];
    int n, i;
    for (i = 0; i <= 501; ++i)
    {
        scanf("%d", &n);
        if (n < 0 || 10 <= n)
        {
            break;
        }
        arr[i] = n;
    }
    int size = i;

    for (int row = 0; row < size; ++row) {
        n = arr[row];
        int print = row + 1;
        int space = size - print;
        // space loop
        for (int col = 0; col < space; ++col) {
            printf(" ");
        }
        // print loop
        for (int col = 0; col < print; ++col) {
            printf("%d", n);
        }
        printf("\n");
    }
    return 0;
}