#include <stdio.h>

int main() {
    int contagem = 0;
    int num;
    for(int i = 0; i < 5; i++) {
        scanf("%d", &num);
        
        if (num % 2 == 0) {
            contagem++;
        }
        
    }
    printf("%d valores pares\n", contagem);
    return 0;
}
