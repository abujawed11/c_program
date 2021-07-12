#include<stdio.h>
int main()
{
    int s=0;
    int a[10],sum=0,per;
    // printf("Enter math marks: ");
    // scanf("%d",&a[0]);
    // printf("Enter Science marks: ");
    // scanf("%d",&a[1]);
    for(int i=1;i<6;i++)
    {
        printf("Enter Subject %d marks: ",i);
        scanf("%d",&a[i-1]);

    }
    for(int i=1;i<6;i++)
    {
        sum = sum + a[i-1];

    }
    per = sum/5;
    printf("Your Total marks is: %d\n",sum);
    printf("Your percentage is: %d\n",per);
    

    for(int i=1;i<6;i++)
    {
        if(a[i-1]<33)
        {
            s++;
        }
    }
    if(s>0)
    {
        printf("You are fail in: ");
    }
    else
    {
        printf("You are passed in all Subjects!!");
        //goto end;
    }

    for(int i=1;i<6;i++)
    {
        if(a[i-1]<33)
        {
            printf("Subject %d ",i);
        }
    }

    end:

    return 0;
}