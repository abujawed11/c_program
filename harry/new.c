#include<stdio.h>

int add(int,int);
int main()
{
    
    int a = 10;
    if(a==10)
    printf("Yes");
    else
    printf("No");
    int c = add(74,56);
    printf("%d",c);

    return 0;
}

int add(int a,int b){
    return a+b;
}