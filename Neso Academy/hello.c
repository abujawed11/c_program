#include<stdio.h>

int add(int a,int b){
    int sum = a+b;
    printf("%d",sum);
}

int main()
{
    //printf("Neso Academy");
    //add(9,6);
    // long double ld = 82.639;
    // printf("%Lf",ld);

    long double d = 3.142;

    printf("Value of long double d = %.5Lf\n",d);

    return 0;
}