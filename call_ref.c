#include<stdio.h>

int ref(int *p,int *q)
{
    int temp;
    temp = *p;
    *p = *p+*q;
    *q = temp-*q;
    return;
}

int main()
{
    int a = 52,b = 29;
    printf("Before change: a = %d, b = %d\n",a,b);
    ref(&a,&b);
    printf("After change: a = %d, b = %d",a,b);


    return 0;
}