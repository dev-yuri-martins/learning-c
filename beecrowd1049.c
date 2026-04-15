#include <stdio.h>
#include <string.h>

int main() {
    char useless[20], p1[20], p2[20]; //Palavra 1 e 2;
    
    fgets(useless, sizeof(useless), stdin);
    useless[strcspn(useless, "\n")] = '\0';
    
    fgets(p1, sizeof(p1), stdin);
    p1[strcspn(p1, "\n")] = '\0';
    
    fgets(p2, sizeof(p2), stdin);
    p2[strcspn(p2, "\n")] = '\0';
    
    // Seria mais simples se eu usasse apenas scanf, mas tenho que treinar outras coisas
    
    if (strcmp(p1, "ave") == 0) {
        if (strcmp(p2, "carnivoro") == 0) {
            printf("aguia\n");
        } else {
            printf("pomba\n");
        }
    } else if (strcmp(p1, "mamifero") == 0) {
        if (strcmp(p2, "onivoro") == 0) {
            printf("homem\n");
        } else {
            printf("vaca\n");
        }
    } else if (strcmp(p1, "inseto") == 0) {
        if (strcmp(p2, "hematofago") == 0) {
            printf("pulga\n");
        } else {
            printf("lagarta\n");
        }
    } else if (strcmp(p1, "anelideo") == 0) {
        if (strcmp(p2, "hematofago") == 0) {
            printf("sanguessuga\n");
        } else {
            printf("minhoca\n");
        }
    }
    return 0;
}
