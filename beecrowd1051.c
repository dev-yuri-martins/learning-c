#include <stdio.h>

int main() {
    double salary, i1, i2, i3;
    scanf(" %lf", &salary);
    
    if (salary <= 2000.00) {
        printf("Isento\n");
    } else if (salary > 2000.00 && salary <= 3000.00) {
        i1 = salary - 2000.00;
        i1 = (i1 * 8.0) / 100.0;
        printf("R$ %.2lf\n", i1);
    } else if (salary > 3000.00 && salary <=4500.00) {
        i1 = 80.00;
        i2 = salary - 3000.00;
        i2 = (i2 * 18.0) / 100.0;
        printf("R$ %.2lf\n", i1 + i2);
    } else if (salary > 4500.00) {
        i1 = 80.00;
        i2 = 270.00;
        i3 = salary - 4500.00;
        i3 = (i3 * 28.0) / 100.0;
        printf("R$ %.2lf\n", i1 + i2 + i3);
    }
    return 0;
}
