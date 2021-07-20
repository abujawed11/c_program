#include<stdio.h>

double add(double a,double b){
    return (a+b);
}

double sub(double a,double b){
    return a-b;
}

int main()
{
    double a,b;
    int c;
    double (*ptr[3])(double,double) = {add,sub};
    printf("Enter\n0. Add\t1. Subtract\n");
    scanf("%d",&c);
    printf("Enter two numbers: ");
    scanf("%lf %lf",&a,&b);
    printf("%lf",ptr[c](a,b));

    
    
    
    return 0;
}
