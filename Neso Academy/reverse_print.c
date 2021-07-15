#include<stdio.h>
#define N 5
int main()
{
    int a[N];
    int *p;
    //p = a;
    printf("Enter %d elements: \n",N);
    for(p=a;p<a+N;p++){
        printf("Enter [%d] element: ",p);
        scanf("%d",p);
    }

    for(p=a+N-1;p>=a;p--){
        printf("%d ",*p);

    }


    

    return 0;
}