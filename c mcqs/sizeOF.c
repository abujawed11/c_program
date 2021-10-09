#include<stdio.h>

union size
{   
    int a;
    char b;
    float c;
    double d;
};

struct sizeOF
{
     //int a;
    char b;//[8];
    float c;
    double d;
};




int main()
{
    //printf("%d %d %d %d\n",sizeof(int),sizeof(char),sizeof(float),sizeof(double));
    union size a;
    union size *ptr;
    ptr = &a;

    a.a = 20;
    ptr -> a = 40;
    ptr -> c = 5.3f;
    ptr -> d = 3.2;
    printf("%d",a.a);
    //printf("%d %d",sizeof(union size), sizeof(struct  sizeOF));
    
    
    return 0;
}