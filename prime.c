#include <stdio.h>
int prime(n);

int prime(n)
{
    int i,r,s=0;
    for (i = 1; i <=n; i++)
    {
        r=n%i;
        if(r==0)
        {
            s++;
        }
    }
    if(s==2)
    {
        printf("%d\n",n);
    }
    
    

}

int main()
{
    int n1,n2,i;
    printf("Enter 1st number: ");
    scanf("%d",&n1);
    printf("Enter 2nd number: ");
    scanf("%d",&n2);
    for(i=n1;i<=n2;i++)
    {
        prime(i);
    }
}