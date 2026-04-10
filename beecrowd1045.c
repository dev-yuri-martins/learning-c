#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    scanf(" %lf %lf %lf", &a, &b, &c);

    if (a < c) {
    double x = a;
    a = c; c = x;
    }
    
    if (a < b) {
    double x = a;
    a = b; b = x;
    }
    
    if (b < c) {
    double x = b;
    b = c; c = x;
    }
    
    if (a >= b + c) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
    if (fabs(a * a - (b * b + c * c)) < 1e-9) {
        printf("TRIANGULO RETANGULO\n");
    }
    if ((a * a) > (b * b) + (c * c)) {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if ((a * a) < (b * b) + (c * c)) {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if (fabs(a - b) < 1e-9 && fabs(b - c) < 1e-9) {
        printf("TRIANGULO EQUILATERO\n");
    } else if (fabs(a - b) < 1e-9 || fabs(a - c) < 1e-9 || fabs(b - c) < 1e-9) {
        printf("TRIANGULO ISOSCELES\n");
    }
    }
    return 0;
}
