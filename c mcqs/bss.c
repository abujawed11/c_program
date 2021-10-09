#include<stdio.h>
static int i;
static int i=27;
static int i;
int main()
{
    static int i;
    // for (int i = 0; i < 100000; i++)
    // {
    //     printf("%d\n",i);
    // }
    
    printf("%d",i);


    return 0;
}