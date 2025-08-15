#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,m;
    char c[100];
    int *ptr1=&n,*ptr2=&m;
    char *ptr3=c;

    scanf("%d %d",ptr1,ptr2);
    scanf("%s",ptr3);
    
    for (int i=1;i<=*ptr2;i++) {
        for(int j=1;j<=*ptr1/(*ptr2);j++) {
            printf("%c",ptr3[i*(*ptr1)/(*ptr2)-j]);
        }
    }
    return 0;
}
