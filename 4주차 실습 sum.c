#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main () {
    int n;
    int i,j;
    int arr[1000] = {};
    int *point = arr;

    scanf("%d",&n);

    for(int temp=0;temp<n;temp++) {
        scanf("%d",&arr[temp]);
    }
    arr[n] = 0;
    scanf("%d %d",&i,&j);
    for(;i<=j;i++) {
        arr[n] += point[i];
    }
    printf("%d", point[n]);
}