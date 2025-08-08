#include <stdio.h>
#include <string.h>

void Counting(char arr[],int res[]){
    for (int i=0; i<strlen(arr); i++){
        for(int j=0; j<strlen(arr); j++) {
            if (arr[j]-'0' == i) {
                res[i] += 1;
            }
        }

    }
}

int main(){
    char arr[1000];
    scanf("%s",arr);
    int res[1000] = {0};
    Counting(arr,res);
    
    for(int i=0;i<=9;i++) {
        printf("%d ",res[i]);
    }
}