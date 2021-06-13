#include<stdio.h>

int ar(int *ptr)
{
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n",*(ptr+i));
        
    }
    
}

int ar2(int gr[])
{
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n",gr[i]);
    }
    gr[2]=658;
    
}

int main()
{
    int arr[] = {10,25,36,42,20,56};

    ar2(arr);
    printf("new is as\n");
    ar2(arr);
    
    
    return 0;

}