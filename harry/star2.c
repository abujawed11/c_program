#include <stdio.h>
int cont(char a)
{

}

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
    char a;
    while (1)
    {
        printf("Enter Type of Pattern to print: \n1: Traingle\t2: Recursive Traingle\n");
        printf("To exit, Press 3\n");
        scanf("%d", &type);
        if(type==3)
        {
            break;
        }
        if(type>2)
        {

               beg: printf("Wrong Value Entered!!\n");
                printf("e: Continue\t q: Exit\n");
                scanf("%s", &a);
                if (a == 'e') {
                    continue;
                } else if (a == 'q') {
                    break;
                } else
                {
                    goto beg;

                }

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