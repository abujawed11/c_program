#include<stdio.h>

int main()
{
    int i = 1;
    int *p = &i;
    int *q;
    q = p;
    *q = 85;
    printf("%d",i);
    



    return 0;
}