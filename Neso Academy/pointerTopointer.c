#include<stdio.h>

int main()
{
    int a,*b,**c;
    a = 4;
    b= &a;
    c = &b;
    //c = &a;
    printf("%d ",*b);
    printf("%d ",c);

    return 0;
}