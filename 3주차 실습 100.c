#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int calc(char arr[]){
    int result=0;
    for(int i=0;i<strlen(arr);i++){
        result += arr[i]-'a'+1;
    }
    return result;
    
}

int Process(char arr1[], char arr2[] ){
    if (calc(arr1) < calc(arr2)) return 1;
    return 0;
}

int main(){
    char word1[20],word2[20];
    scanf("%s",word1);
    scanf("%s",word2);


    int mode = Process(word1, word2);

    if (mode==1) {
        for(int i=0;i<strlen(word2);i++) {
            printf("%c",word2[i]);
        }
    }
    else {for(int i=0;i<strlen(word1);i++) {
            printf("%c",word1[i]);
        }
    }

}