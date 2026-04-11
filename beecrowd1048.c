#include <stdio.h> 

int main() {
    double salary, increase;
    scanf(" %lf", &salary);
    int percent = 0;
    
    if (salary <= 400.00) {
        increase = (salary * 15) / 100.00;
        percent = 15;
    } else if (salary > 400.00 && salary <= 800.00) {
        increase = (salary * 12) / 100.00;
        percent = 12;
    } else if (salary > 800.00 && salary <= 1200.00) {
        increase = (salary * 10) / 100.00;
        percent = 10;
    } else if (salary > 1200.00 && salary <= 2000.00) {
        increase = (salary * 7) / 100.00;
        percent = 7;
    } else {
        increase = (salary * 4) / 100.00;
        percent = 4;
    }
    
    printf("Novo salario: %.2lf\n", salary + increase);
    printf("Reajuste Ganho: %.2lf\n", increase);
    printf("Em percentual: %d %%\n", percent);
    
    return 0;
}
