#include<stdio.h>
#include<string.h>
int main()
{
    // char s[] = "Reh";
    // printf("%d %d\n",sizeof(s), strlen(s));
    // printf("%d",*(s+strlen(s)));

    char a = 'c';
    char *p;
    p = &a;
    printf("%d %d %d %c",sizeof(p),sizeof(*p), p , *p);
    return 0;
}