#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

Palin(char *point,int len) {
    for(int i=0;i<len/2;i++) {
        if (point[i]!=point[len-1-i]) {
            return 0;
        }
        
    }
    return 1;
}

int main() {

    int input,len;
    char arr[100];
    char *point = arr;
    scanf("%d",&input);
    int result[input]; 
    for(int i=0;i<input;i++) {
        scanf("%d",&len);
        scanf("%s",arr);
        result[i]= Palin(point,len);
    }

   int *point2 = result;
   for (int i=0; i<input; i++) {
        if (point2[i] == 0) {
            printf("NO\n");
        }
        else {
            printf("YES\n");
        }
   }
}
