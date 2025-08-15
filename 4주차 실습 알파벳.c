#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void Counting(char arr[],int res[]){
    for (int i=0; i<strlen(arr); i++){
        res[arr[i]-'a'] += 1;
    }
}

int main() {

    char arr[100];
    int res[26] = {0};

    int *ptr2=res;

    scanf("%s",arr);
    Counting(arr,res);

    for(int i=0;i<sizeof(res)/sizeof(int);i++) {
        printf("%d ",*(ptr2+i));
    }
    return 0;
}
