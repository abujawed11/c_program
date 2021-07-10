#include<stdio.h>
#include<math.h>

int main()
{
    int n,i=0,res=0,rem;
    printf("Enter a Binary number: ");
    scanf("%d",&n);
    while(n!=0){
        rem = n%10;
        res = res + (pow(2,i)*rem);
        i++;
        n=n/10;
    }
    printf("%d",res);

    return 0;
}