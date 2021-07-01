#include<stdio.h>
#include<limits.h>

int *f();

int *f(){
    int j=10;
    return j;


}


int main(){
    int a = 10;
    int *ptr = &a;
    *ptr += 1;
    //printf("%d,%d",*ptr,a);
    long b;
    b = __LONG_MAX__;
    int d = __INT_MAX__;
    printf("%ld\n",b);
    printf("%d",d);





    return 0;
}