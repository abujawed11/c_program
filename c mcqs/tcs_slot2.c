#include<stdio.h>

int main()
{
    int n,temp;
    scanf("%d",&n);
    int r[n];//,s[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&r[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if(r[i] ==0){
            if(i==(n-1)){
                continue;
            }
            temp = r[i];
            r[i] = r[i+1];
            r[i+1] = temp;
            //i = 0;     
        }
        
    
    }


    

    

    for (int i = 0; i < n; i++)
    {
        printf("%d ",r[i]);
    }
    
    
    



    return 0;
}