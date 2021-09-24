#include<stdio.h>

int main(){
    int a=0,b=1,c=5;
    //*((a+1==1)?&b:&c) = a ? b : c;
    b = 6 ? b : c;

    printf("%d %d %d",a,b,c);

    return 0;
}