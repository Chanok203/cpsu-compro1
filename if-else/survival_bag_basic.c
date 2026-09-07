#include <stdio.h>

int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    int bag_x = x / 3;
    int bag_y = y / 4;
    int bag_z = z / 2;

    int bag = bag_z;
    if (bag_x <= bag_y && bag_x <= bag_z)
    {
        bag = bag_x;
    }
    else if (bag_y <= bag_z)
    {
        bag = bag_y;
    }

    printf("%d %d %d %d",
           bag,
           x - bag * 3,
           y - bag * 4,
           z - bag * 2);

    return 0;
}