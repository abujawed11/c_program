#include<stdio.h>
int main()
{
    char s[] = "Hello";
    char *ptr = s;
    while (*ptr) 
    {
        printf("%c ",*ptr);
        ptr++;
    }
    


    return 0;
}