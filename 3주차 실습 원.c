#include <stdio.h>
#include <stdlib.h>

const float pi = 3.141592;

float area (n){
    return pi * n * 2;
}

float cir (n) {
    return n * n * pi;
}

int main() {
    int dia;

    scanf("%d",&dia);
    printf("%.3f %.3f",area(dia),cir(dia));


}