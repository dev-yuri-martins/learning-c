#include <stdio.h>

int main() {
    int pares, impares, positivos, negativos, num;
    pares =0; impares = 0; negativos = 0; positivos = 0;
    
    for (int i = 0; i < 5; i ++) {
        scanf(" %d", &num);
        if (num > 0) {
            positivos++;
        } else if (num < 0){
            negativos++;
        }
        if (num % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }
    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);
    
    return 0;
}
