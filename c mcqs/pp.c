#include<stdio.h>

int main()
{
    int i = 10;
    int x = 20;
    int *p2 = &x;
    int *p = &i;
    int *q;
    q = p2;
    
    //*q = 63;
    printf("%d\t",*p);
    printf("%d",*q);



    return 0;
}