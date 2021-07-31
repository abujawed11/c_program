#include<stdio.h>
int main()
{
    int a=91,b=39;
    //printf("%d",a&b);
    printf("%d\t",4%3);
    printf("%d\t",-4%3);
    printf("%d\t",4%-3);
    printf("%d\t",-4%-3);

    a >>= 2;
    b = 2536%2;

    printf("%d",a);

    return 0;
}