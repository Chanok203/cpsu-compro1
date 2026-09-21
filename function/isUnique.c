#include <stdio.h>

int isUnique(int* arr, int N) {
    for (int i = 0; i < N; ++i) {
        for (int j = i+1 ; j < N; ++j) {
            if (arr[i] == arr[j]) {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; ++i) {
        scanf("%d", &arr[i]);
    }

    int u = isUnique(arr, N);
    printf("%d", u);
    return 0;
}