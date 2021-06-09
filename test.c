#include <stdio.h>

int main()
{
    int n3;
    float n1,n2,n4=12;
    printf("Enter 1st number: ");
    scanf("%f",&n1);
    printf("Enter 2nd number: ");
    scanf("%f",&n2);
    n2 = 2.3 * n1 + n2 * 4.9;
    n3 = (int) n2;
    n4 = (float) n3 + 6.98 * n2+ (int) n4;
    printf("%f\n",n2);
    printf("%d\n",n3);
    printf("%f",n4);
}