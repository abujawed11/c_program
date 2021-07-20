#include<stdio.h>

int main()
{

        int a[] = {1,2,3,4,5,6,7,8,9,10,11,12};
        int sum=0;
        int *p;
        int l = sizeof(a)/sizeof(int);
        for(p = a; p < a+l;p++){
            sum += *p;
        }
        printf("%d",sum);
          




    return 0;
}



    
