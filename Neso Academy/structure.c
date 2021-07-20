#include<stdio.h>

struct car{
    char *name;
    char *color;
    int fuel;
    int milage;


};

typedef struct car c;


int main()
{
    c c1,c2,c3,c4;
    c1.name = "Maruti Suzuki";
    c2.name = "Honda";
    c3.name = "Tata motor";
    c4.name = "Volvo";
    c1.color = "Balck";
    c2.color = "Grey";
    c3.color = "Orange";

    printf("%s",c2.color);
    

    return 0;
}