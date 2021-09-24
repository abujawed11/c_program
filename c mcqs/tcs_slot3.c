#include<stdio.h>

int main()
{
    char S[10];
    int cout1=0,cout2=0;
    scanf("%s",S);
    for (int i = 0; i < 10; i++)
    {
        if(S[i] == '#'){
            cout1++;
        }
        if(S[i] == '*'){
            cout2++;
        }

    }
    // if(cout2 > cout1){
    //     printf("%d",1);
    // }
    // else if(cout2 < cout1){
    //     printf("-1");
    // }
    // else{
    //     printf("0");
    // }

    printf("%d", cout2 - cout1);
    




    return 0;
}