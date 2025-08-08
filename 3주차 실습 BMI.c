#include <stdio.h>
#include <stdlib.h>
 
 int BMI(float f){
            if (f < 20) return 1;
            if (f >= 20 && f <= 24) return 2;
            return 3;
        }

int main() {

    int judge;
    float bmi;
    scanf("%f", &bmi);
    judge = BMI(bmi);

    if(judge==1) printf("low");
    else if(judge==2) printf("normal");
    else printf("warning");

    return 0;
}