#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[100];
    int count=0,max=0;
    //gets(s);
    scanf("%[^\n]",s);
    for (int i=0; s[i] != '\0'; i++)
    {
        if(s[i] != ' '){
            count++;
        }
        else{
            //max = __max(max,count);
            count = 0;
        }
        max = (max>count)?max:count;
        
    }

    printf("%d",max);
    


    return 0;
}