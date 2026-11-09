#include <stdio.h>
#include <string.h>

struct StudentRecord
{
    int ID;
    char name[256];
    int year;
    float GPA;
} typedef STUDENT_RECORD;

struct group
{
    STUDENT_RECORD s[10];
    int act[10];
} typedef GROUP;

int main() {
    int n = 20;
    GROUP g[n];
    

    for (int i = 0; i < n; ++i) {
        int m = 10;
        for (int j = 0; j < m; ++j) {
            STUDENT_RECORD this_s;
            // read
            scanf("%d\n", &this_s.ID);
            gets(this_s.name);
            scanf("%d", &this_s.year);
            scanf("%f", &this_s.GPA);

            g[i].s[j] = this_s;
        }
    }

    return 0;
}