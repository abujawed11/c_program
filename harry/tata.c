#include <stdio.h>

int main()
{
    int a = 7;
    int const *p = &a;

    printf("%d", ++(*p));
}
