#include <stdio.h>

double calcualteBMI(double kg, double m) {
    return kg / (m*m);
}

int main () {
    double kg = 80;
    double m = 1.80;
    double bmi = calcualteBMI(kg, m);
    return 0;
}