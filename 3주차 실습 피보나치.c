#include <stdio.h>
#include <stdlib.h>

int main() {
    int input;
    scanf("%d",&input);

    int pre=1;
    int two_pre=1;
    int sum=1;

    for (int i=2; i<input; i++) {
        sum = pre + two_pre;
        two_pre = pre;
        pre = sum;

    }
    printf("%d",sum);
}   