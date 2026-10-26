#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main () {
    char str[100];
    scanf("%s", str);
    
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    printf("count = %d\n", count);

    for (count = 0; str[count] != '\0' ; count++);
    printf("count = %d\n", count);


    return 0;
}