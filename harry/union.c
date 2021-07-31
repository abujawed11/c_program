#include<stdio.h>

typedef struct Student{
    int id;
    char *name;
    float marks;
    double avg;


}s;

int main()
{
    s s1;
    s1.id = 1;
    s1.name = "Abubakr";
    s1.marks = 32.5f;
    s1.avg = s1.marks/2;

    printf("%d ",s1.id);
    printf("%s ",s1.name);




    return 0;
}