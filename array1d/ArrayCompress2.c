#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; ++i) {
        scanf("%d", &arr[i]);
    }

    int k1, k2, k3;
    scanf("%d %d %d", &k1, &k2, &k3);

    int sum = 0;
    int prevIsK = 0; // ตรวจสอบว่าตัวก่อนหน้าใช่ K ? ใช้ 0, 1
    for (int i = 0; i < N; ++i) {
        if ( !(arr[i] == k1 || arr[i] == k2 || arr[i] == k3) ) {
            sum += arr[i];
            prevIsK = 0;
            continue;
        }
        
        if (prevIsK == 0) {
            if (i == 0) { // K อยู่หน้าสุดหรือไม่ ?
                printf("%d " , arr[i]);
            } else {
                printf("%d %d " , sum, arr[i]);
            }
        }
        prevIsK = 1;
        sum = 0;
    }
    if (prevIsK == 0) { // K อยู่หลังหรือไม่ ?
        printf("%d", sum);
    }
    printf("\n");
    return 0;
}