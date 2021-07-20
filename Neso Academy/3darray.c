#include<stdio.h>

int main()
{
    int a[2][2][2] = {1,2,3,4,5,6,7,8};
    int b[3][3]={1,2,3,4,5,6};


    printf("%d ",  **(*(a+1)+1)   );
    printf("%d ", *(*(*(a+1)+1)+1) );

    // for (int i = 0; i < 8; i++)
    // {
    //     printf("%d ",***a+i);
    // }
    


    //printf("%d",***a+6);

    return 0;
}