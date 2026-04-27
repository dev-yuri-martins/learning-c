#include <stdio.h>


int main() {
    double num, media;
    int cont;
    media = 0.0;
    
    for(int x = 0; x < 6; x++) {
        scanf(" %lf", &num);
        if(num > 0) {
            cont ++;
            media += num;
        }
    }
    media = media / cont;
    
    printf("%d valores positivos\n", cont);
    
    if (media == 0.0) {
        printf("-nan");
    } else {
        printf("%.1lf\n", media);
    }
    return 0;
}
