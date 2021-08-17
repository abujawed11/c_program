#include<stdio.h>
int main()
{
    int i = 511;
    char *ptr = (char*)&i;
    printf("%d",*ptr);
    return 0;
}