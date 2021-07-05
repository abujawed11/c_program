#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int ar[] = {5,6,9,8,7,2,4};
    char b[]= "Abubakar";
    int c = strlen(b);
    int len = sizeof(ar)/sizeof(int);
    int siz = sizeof(double);
    //printf("%d",c);
    printf("%d\n",len);
    printf("%d",siz);
    
    return 0;
}