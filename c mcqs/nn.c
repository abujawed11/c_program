#include<stdio.h>

void f(unsigned int i){
    if(i/10 != 0)
    f(i/10);
    printf("%i",i%10);
}


int main()
{
    f(123);
    return 0;
}