#include <stdio.h>
#include <math.h>

int main() {
    double pi = 3.14159;
    double vol, r;   
    
    scanf(" %lf", &r);
    r = pow(r, 3.0);
    vol = pi * r * (4 / 3.0);
    printf("VOLUME = %.3lf\n", vol);
    
    return 0;
}
