#include <stdio.h>

int main() {
    int func, hrs;
    float valor;
    scanf(" %d %d %f", &func, &hrs, &valor);

    printf("NUMBER = %d\nSALARY = U$ %.2f\n", func, valor * hrs);
    return 0;
}
