#include<stdio.h>

typedef struct Student{
    char name[20];
    int class;
    int age;
    int roll;
    char gender[5];
    
    }std;


int main()
{
    std s[20];
    for (int i = 0; i < 2; i++)
    {
        printf("Student %d name: ",i+1);
        //scanf("%s",s[i].name);
        gets(s[i].name);
        printf("Enter %d class",i+1);
        
    }
    printf("\n");

    for (int i = 0; i < 2; i++)
    {
        printf("Student %d name is %s\n",i+1,s[i].name);
    }
    
    


    return 0;
}