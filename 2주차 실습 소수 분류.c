#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int input;
    int count=1;
    int stop=0;
    scanf("%d",&input);
    
    for(int i=2;i<=input;i++){
        for(int j=2; j*j<=i;j++) {
            if (i%j == 0) {
                stop++;
                break;
            }
        }
        if (stop==1) {
            stop = 0;
            continue;
        }
        printf("%d ", i);
        if (count == 10) {
            printf("\n");
            count = 0;
        }
        count++;
    }
        
    return 0;
}
