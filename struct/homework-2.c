#include <stdio.h>
#include <math.h>

struct Point
{
    float x;
    float y;
} typedef POINT;

int main()
{
    POINT pA, pB;

    printf("Enter Point A (x y): ");
    scanf("%f %f", &pA.x, &pA.y);

    printf("Enter Point B (x y): ");
    scanf("%f %f", &pB.x, &pB.y);

    float distA = sqrt((pA.x * pA.x) + (pA.y * pA.y));
    float distB = sqrt((pB.x * pB.x) + (pB.y * pB.y));

    printf("Point A distance: %.2f\n", distA);
    printf("Point B distance: %.2f\n", distB);

    if (distA < distB) {
        printf("Result: Point A is closer to origin.\n");
    } else if (distB < distA) {
        printf("Result: Point B is closer to origin.\n");
    } else {
        printf("Result: Both points are at the same distance.\n");
    }

    return 0;
}