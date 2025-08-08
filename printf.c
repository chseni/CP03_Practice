#include <stdio.h>
int tar=0;
int fibo (int num,int pre,int two_pre) {
    if (num == 1) {
        printf("%d",pre);
        return 0;
    }
    if (num == tar-1) {
        printf("%d, ",two_pre);
        return fibo(num-1,pre+two_pre,pre);
    }
    printf("%d, ",pre);
    return fibo(num-1,pre+two_pre,pre);

}

int fibonaci (int num) {
    return fibo(num, 1, 1);

}

int main(void) {
    scanf("%d",&tar);
    fibonaci((int)tar);
}