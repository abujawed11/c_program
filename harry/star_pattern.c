#include <stdio.h>
int patt1(int n)
{
    for(int i=1;i<=n;i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int patt2(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int num, type;
    while (1)
    {
    printf("Enter Type of Pattern to print: \n1: Traingle\t2: Recursive Traingle\n");
    printf("To exit, Press 3\n");
    scanf("%d", &type);
    if(type==3)
    {
        break;
    }
    printf("Enter pattern length: ");
    scanf("%d", &num);
  
    switch (type)
    {
    case 1:
        patt1(num);
        break;
    case 2:
        patt2(num);
        break;

    default:
        break;
    }
    }

    return 0;
}