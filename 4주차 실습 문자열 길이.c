#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    char *point;
    char temp[800];
    int result = 0;
    point=temp;
    for(int i=0;i<n;i++) {
        scanf("%s",temp);
        result += strlen(point);
    }
    printf("%d",*&result);
    return 0;
}
