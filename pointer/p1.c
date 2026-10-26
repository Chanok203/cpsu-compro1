#include <stdio.h>

void mulByX(int* pa, int* pb, int* pc, int x) {
    *pa = (*pa) * x;
    *pb = (*pb) * x;
    *pc = (*pc) * x;
}

int main() {
    int a = 10, b = 20, c = 30;
    printf("%d %d %d\n", a, b, c);

    mulByX(&a, &b, &c, 10);
    printf("%d %d %d\n", a, b, c);
}