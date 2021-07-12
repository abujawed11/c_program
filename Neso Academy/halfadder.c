#include<stdio.h>


int main()
{
    int a,b,sum=0,carry;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    while (b!=0)
    {
        sum=a^b;
        carry = (a&b)<<1;
        a=sum;
        b=carry;
    }
    printf("The sum of two no. is %d",a);
    



    return 0;
}