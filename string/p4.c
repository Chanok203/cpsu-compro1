#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main () {
    // MY HOUSE

    char str1[1024]; // MY
    char str2[1024]; // HOUSE
    char str3[2048]; // MY HOUSE

    scanf("%s %s", str1, str2);

    // MY -> str3
    int c = 0;
    for (int i = 0; i < 1024; i++) {
        if (str1[i] == '\0') break;
        str3[c++] = str1[i];
    }
    
    // ' ' -> str3
    str3[c++] = ' ';

    // House -> str3
    for (int i = 0; i < 1024; i++) {
        if (str2[i] == '\0') break;
        str3[c++] = str2[i];
    }

    // '\0' -> str3
    str3[c] = '\0';

    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
    printf("str3 = %s\n", str3);
    
    printf("c = %d\n", c);
    printf("strlen = %d\n", strlen(str3));

    char* str4;
    str4 = strcat(str1, " ");
    str4 = strcat(str4, str2);
    printf("str4 = %s\n", str4);

    return 0;
}