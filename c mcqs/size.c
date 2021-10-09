#include<stdio.h>
#include<string.h>
int main()
{
    char a[] = "Hello World";
    //int a[4] = {10,20,30,40};
    //printf("%d ",sizeof(a));
    char *p;
    p=a;
    printf("%d %d %d %d",sizeof(a),sizeof(p),strlen(a),strlen(p));

    printf("\n%d %d %d", sizeof(int), sizeof(float),sizeof(double));
    return 0;
}