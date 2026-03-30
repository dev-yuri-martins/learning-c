#include <stdio.h>

int main() {
    int a, b;
    scanf(" %d %d", &a, &b);
    
    if (a > b) {
        printf("O JOGO DUROU %d HORA(S)", a - b);
    } else {
        b += 24;
        printf("O JOGO DUROU %d HORA(S)", b - a);
    }
    return 0;
}
