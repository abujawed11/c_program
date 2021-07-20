#include<stdio.h>

int main()
{
    int a[2][3] = {1,8,3,10,5,6};
    int **ptr = a;
    //ptr = a;
    //printf("%d ",a);
    // for (int i = 0; i < 6; i++)
    // {
    //     printf("%d ",*(*a+i));
    // }

    //for (int i = 0; i < 6; i++)
    //{
        printf("%d ",*(ptr+1));
    //}


    
    //printf("%d ",*(*a+1));

    // printf("%d ",);
    // printf("%d ",**a+2);
    // printf("%d ",**a+3);


    return 0;
}