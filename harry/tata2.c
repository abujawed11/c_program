#include <stdio.h>

int main()
{
    char s[] = "man";

    int i=0;
    
    for (i = 0; s[i]; i++)
    {
        printf("%d\n",s[i]);
        printf("%c%c%c%cn", s[i], *(s + i), *(i + s), i[s]);
    }
    //printf("\n");
    // for (i = 0; s[i]; i++)
    // {

    //     printf("%c%c%c%cn", s[i], *(s + i), *(i + s), s[i]);
    // }
    //printf("%c%c%c%cn", s[i], *(s + i), *(i + s), s[i]);

    return 0;
}