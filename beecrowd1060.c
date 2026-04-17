#include <stdio.h>

int main() {
    int contador = 0;
    for (int i = 0; i < 6; i++) {
        float num = 0;  
        scanf(" %f", &num);
        if (num > 0.0) {
            contador ++;
        }
    }
    printf("%d valores positivos\n", contador);
    
    return 0;
}
