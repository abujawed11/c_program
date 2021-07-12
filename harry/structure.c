#include<stdio.h>
#include<string.h>

struct student
{
    int id;
    char name[30];
    int marks;
    char fav_mov[25];
};

typedef struct emp
{
    int id;

}st;




int main()
{
    struct student s1,s2;
    s1.id=1;
    s2.id=2;
    strcpy(s1.name,"Abubakar");
    printf("%s\n",s1.name);
    strcpy(s2.name,"Abu Sufiyan");
    printf("%s\n",s2.name);
    s1.marks = 96;
    s2.marks = 70;
    printf("The marks of %s and %s are %d and %d respectively.\n",s1.name,s2.name,s1.marks,s2.marks);
    strcpy(s1.fav_mov,"Kabir Singh");
    strcpy(s2.fav_mov,"Mom");
    printf("The favourite movies of %s and %s are %s and %s respectively.",s1.name,s2.name,s1.fav_mov,s2.fav_mov);
    st e1;
    e1.id=4;
    printf("\n%d",e1.id);

    
    return 0;
}