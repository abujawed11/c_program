#include<stdio.h>

int main()
{
    int a[] = {5,16,7,89,45,32,23,10};
    int *p = &a[1], *q = &a[5];
    int l = sizeof(a)/sizeof(int);
    printf("%d ",*(p+3));
    printf("%d ",*(q-3));
    printf("%d ",q-p);
    printf("%d ",p < q);
    printf("%d", *p < *q);




    // for (int i = 0; i < l; i++)
    // {
    //     printf("%d ",*p);
    //     p++;

    // }
    


    return 0;
}