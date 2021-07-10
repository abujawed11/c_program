#include<stdio.h>

int fact(int n){
    if(n==0)
        return 1;
    else
        return n*fact(n-1);

}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int f = fact(num);
    printf("%d",f);
    return 0;


}