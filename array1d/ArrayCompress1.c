#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; ++i) {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    int sum = 0;
    for (int i = 0; i < N; ++i) {
        if (arr[i] == k) {
            printf("%d %d ", sum, k);
            sum = 0;
        } else {
            sum += arr[i];
        }
    }
    printf("%d\n", sum);

    return 0;
}