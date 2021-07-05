#include <stdio.h>
int main()
{
    int a = 10;
    int *ptr = &a;
    char b = 'G',y = 'c';
    char *ptrc = &b;
    
    printf("%c\n",*ptrc);
    //printf("%x\n",ptr);
    //printf("%d",*ptr);
    
    ptrc++;
    ptrc = &y;

    //printf("%X\n",ptr);
    printf("%c",*ptrc);

    return 0;
}