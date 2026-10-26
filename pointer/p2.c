#include <stdio.h>

int main() {
    int arr[3] = {6, 2, 8};
    printf("%d %d %d\n", arr[0], arr[1], arr[2]);

    printf("%d\n", *arr);
    printf("%d\n", *(arr + 1));
    printf("%d\n", *(arr + 2));
}