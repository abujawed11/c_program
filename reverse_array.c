#include<stdio.h>
#include<string.h>

int printarr(int s[])
{
    

    
    
    // int lentgh = sizeof(s)/sizeof(s[0]);
    // printf("%d",lentgh);
    for (int i = 0; i < 9; i++)
    {
        printf("%d\t",s[i]);
    }
}

int arrrever(int *ptr)
{
    //int lentgh = sizeof(*ptr)/sizeof(int);
    int a[20];
    for (int i = 0; i < 9; i++)
    {
        a[i] = *(ptr+(8-i));
    }
    //printarr(a);
    for (int i = 0; i < 9; i++)
    {
        *(ptr+i) = a[i];
    }
    //printf("%d",sizeof(a));
    
    //printf("%d",*ptr);
    // *ptr = *(ptr+8);
    // *(ptr+1) = *(ptr+7);

    //printf("%d",*(ptr+8));
}


int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    //int lentgh = sizeof(arr)/sizeof(arr[0]);
    // while (arr[i] != )      
    // {
    //     i++;
    // }

    //printf("%d",lentgh);
    printarr(arr);
    arrrever(arr);
    printf("\n");
    printarr(arr);
    //printf("%d",strlen(arr));
    // arrrever(arr);



    return 0;
}