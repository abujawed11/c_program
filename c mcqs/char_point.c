#include<stdio.h>

int main()
{
    char a = 'a';
    char *p = &a;
    printf("%c",(char*)p);




    return 0;
}