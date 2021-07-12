#include<stdio.h>


int main()
{
    int a=4,b=3;
    int incr;
    incr = (a < b) || (a==++b) || (++a);
    printf("%d\n",incr);
    printf("%d\n",b);
    printf("%d",a);


    return 0;
}