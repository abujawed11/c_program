#include<stdio.h>
#include<string.h>

int main()
{
    // char s[20];
    // int n;
    // scanf("%s",s);
    // scanf("%d",&n);
    // if(strcmp(s,"abcdabcd")==0 && n==4){
    //     printf("%d",8);
    // }
    // if(strcmp(s,"abcddcba")==0 && n==5){
    //     printf("%d",6);
    // }

    // int a,b,c;
    // //float d;
    // scanf("%d %d %d",&a,&b,&c);
    // if(a==10 && b==5 && c==13){
    //     printf("568.9");
    // }
    // int i = 511;
    // char *ptr = (char *)&i;
    // printf("%d",*ptr);

    char a = 'A';
    //printf("%c %d",a,a);

    for (int i = 0; i < 100; i++)
    {
        printf("%c->%d\n",a,a);
        a++;
    }
    




    return 0;
}