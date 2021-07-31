#include <stdio.h>
int main()
{
    char *p;

    printf("%d %d ", sizeof(*p), sizeof(p));
}