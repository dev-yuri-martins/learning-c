#include <stdio.h>
#include <stdlib.h>

int main() {
    int hi, mi, hf, mf, x;
    scanf(" %i %i %i %i", &hi, &mi, &hf, &mf);
    
    hi = (hi * 60) + mi;
    hf = (hf * 60) + mf;
    
    if (hi >= hf) {
        x = (hf + 1440) - hi;
    } else { 
        x = (hi - hf);
    }
    int hora = x / 60;
    int minutos = x % 60;
    hora = abs(hora);
    minutos = abs(minutos);
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, minutos);
    
    return 0;
}
