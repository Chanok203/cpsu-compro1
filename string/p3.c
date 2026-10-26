#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main () {
    char str[1024];
    gets(str);

    int i;
    int n = strlen(str);
    for (i = 0; i < n; ++i) {
        str[i] = toupper(str[i]);
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}