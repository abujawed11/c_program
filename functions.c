#include <stdio.h>
void add(float a,float b);
void sub(float a,float b);
int getnum(){
    int x,y;
    printf("Enter 2 numbers again: ");
    scanf("%d %d",&x,&y);
    return x;
    //printf("The numbers u enterd are %d %d",x,y);
}

int main()
{
    float n1,n2;
    int c;
    printf("Enter 2 numbers: \n");
    scanf("%f %f",&n1,&n2);
    /*add(n1,n2);
    sub(n1,n2);*/
    c=getnum();
    printf("%d",c);





    return 0;
}

void add(float a,float b)
{
    float sum=a+b;
    printf("%f\n",sum);
}

void sub(float a,float b)
{
    float sub = a-b;
    printf("%f",sub);
}