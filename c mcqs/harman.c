#include<stdio.h>

int main()
{
    int a , b , c;
    a= b = c = 206;
    a = a++ + ++b + --c;
    printf("%d\n",a);

    float str = 3e2;
    printf("%f",str);

    static b5 = 10;
    printf("%d",b5);


    return 0;
}