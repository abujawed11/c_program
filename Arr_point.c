#include <stdio.h>
int main()
{
    char b[30];
    printf("Enter Your Name: ");
    gets(b);
    char *ptr = b;
    // int a[]={1,2,3,4,5,6,7,8,9,10};
    // char b[]={'a','b','c','d','e'};
    //    char b[] = "Abubakar Jawed";
    //    char *ptr = b;
    //char *ptr = &b;
    // printf("%c\n",*ptr);
    // ptr=ptr+4;
    // printf("%c",*ptr);
    // return 0;

    // printf("%c\n",*ptr);
    // ptr++;
    // printf("%c\n",*ptr);
    // ptr++;
    // printf("%c",*ptr);
    printf("Welcome ");
    while (*ptr)
    {

        printf("%c", *ptr + 5);
        ptr++;
    }
}