#include<stdio.h>
#include<string.h>
int main()
{
    char a[] = "Hello World";
    char *p;
    p=a;
    printf("%d %d %d %d",sizeof(a),sizeof(p),strlen(a),strlen(p));
    return 0;
}