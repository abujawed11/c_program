#include<stdio.h>\

    struct{
        unsigned short header: 4;
    }
    data[10][10];

    typedef struct
    {
        int a;
    }data_2;

int main()
{

    data_2 myday;
    myday.a = 52;
    



    return 0;
}