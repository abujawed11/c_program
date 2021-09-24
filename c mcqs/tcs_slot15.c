#include<stdio.h>


int check(int n)
{
    int rem,s[20],count=0,i=0;
    while(n!=0){
        rem = n%10;
        s[i] = rem;
        n = n/10;
        i++;
        //count++;

    }
    return s;





}

int main()
{
    int n1,n2,rem,s[20],count=0;

    check(122);

    for (int i = 0; i < count; i++)
    {
        
    }
    




    return 0;
}