#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main()
{
    int n;
    int max_count = INT_MIN;
    int count = 0;
    scanf("%d",&n);
    int E[n],L[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&E[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&L[i]);
    }
    for (int i=0;i<n;i++){
        count = count + (E[i] - L[i]);
        max_count = __max(max_count,count);
    }

    printf("%d",max_count);
    
    


    return 0;
}