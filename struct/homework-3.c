#include <stdio.h>
#include <string.h>

struct Product
{
    int id;
    char name[32];
    double price;
} typedef PRODUCT;

void createProduct(PRODUCT *p)
{
    printf("\tID: ");
    scanf("%d", &p->id);

    while (getchar() != '\n');

    printf("\tName: ");
    // gets(p->name);
    fgets(p->name, sizeof(p->name), stdin);
    p->name[strcspn(p->name, "\n")] = 0;

    printf("\tPrice: ");
    scanf("%lf", &p->price);
}

void printProduct(PRODUCT *p) {
    printf("ID: %d | Name: %s | Price: %.2f THB\n", p->id, p->name, p->price);
}

int main()
{
    int n = 3;
    PRODUCT products[3];
    for (int i = 0; i < n; ++i) {
        printf("Product: %d\n", i+1);
        createProduct(&products[i]);
    }
    for (int i = 0; i < n; ++i) {
        printProduct(&products[i]);
    }

    int maxPrice = -1;
    int idx = -1;
    for (int i = 0; i < n; ++i) {
        if (products[i].price > maxPrice) {
            maxPrice = products[i].price;
            idx = i;
        }
    }

    printf("=== Most Expensive Product ===");
    printProduct(&products[idx]);

    return 0;
}