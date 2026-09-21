#include <stdio.h>

double average(int* arr) {
    int n = 8;
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    double avg = sum / n;
    return avg;
}

double variance(int* arr, double avg) {
    int n = 8;
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        double d = arr[i] - avg;
        double d2 = d * d;
        sum += d2;
    }
    double var = sum / (n-1);
    return var;
}

int main()
{
    int n = 8;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    double avg = average(arr);
    double var = variance(arr, avg);
    printf("avg = %lf\n", avg);
    printf("var = %lf", var);
    return 0;
}
