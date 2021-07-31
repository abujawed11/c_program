#include <stdio.h>

void func()
{
    static int a = 0;
    a++;
    //return a;
    printf("%d\t", a);
}

int main()
{
    for (int i = 0; i < 100; i++)
    {
        func();
    }

    return 0;
}