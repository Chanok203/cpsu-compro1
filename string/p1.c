#include <stdio.h>
#include <ctype.h>

int main () {
    char str[1024];
    scanf("%s", str);

    int i;
    for (i = 0; i < 1024; ++i) {
        if (str[i] == '\0') {
            break;
        }
        str[i] = toupper(str[i]);
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}