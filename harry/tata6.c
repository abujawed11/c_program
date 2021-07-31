#include <stdio.h>
//#define int char
int main()
{
    struct xx

    {

        int x;

        char name[];
    };

    struct xx *s;

    printf("%d", s->x);

    printf("%s", s->name);

    return 0;
}