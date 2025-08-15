#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[5] = {};
    int *ptr=arr;
    int sum=0;
    int input;

    int *ptr2=&input;
    scanf("%d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
    scanf("%d",ptr2);

    for(int i=0;i<5;i++) {
        sum += ptr[i]+*ptr2;
    }

    printf("%d",sum);
    return 0;
}
