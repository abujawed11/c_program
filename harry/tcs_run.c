#include<stdio.h>

int main()
{
    int R[100];
    int i=0;
    printf("Enter the numbers (q for quit): ");
    while (1)
    {   
        scanf("%d",&R[i]);
        if(R[i] == 0){
            //R[i] = '\0';
            break;
        }
        i++;
    }
    for (int j = 0; j<i; j++)
    {
        printf("%d ",R[j]);
    }
    //printf("%d",R[0]);
    
    


    return 0;
}