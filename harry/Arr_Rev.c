#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int printArray(int ar[])
{
    for(int i=0;i<8;i++)
    {
        printf("Value of array at index %d is %d\n",i,ar[i]);
    }
}

int arReverse(int b[])
{
    int temp;
    for(int i=0;i<8/2;i++)
    {
        temp = b[i];
        b[i] = b[7-i];
        b[7-i] = temp;
    }
}

int main()
{
    int a[] = {1,2,3,4,5,6,7,8};
    printArray(a);
    printf("\n\nAfter Reversal the string is: \n\n");
    arReverse(a);

    printArray(a);
}
