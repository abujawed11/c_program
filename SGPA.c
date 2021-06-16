#include <stdio.h>

int main()
{
    int credits[9];
    int grade[9];
    float SGPA = 0.0, TotalCredit = 0.0, creditGrade = 0.0;
    for (int i = 0; i < 9; i++)
    {
        printf("Enter Credits Registerd: ");
        scanf("%d", &credits[i]);
        printf("Enter Your Grade: ");
        scanf("%d", &grade[i]);
    }
    for (int i = 0; i < 9; i++)
    {
        TotalCredit = TotalCredit + credits[i];
    }
    for (int i = 0; i < 9; i++)
    {
        creditGrade = creditGrade + (credits[i] * grade[i]);
    }
    SGPA = creditGrade / TotalCredit;
    printf("Toatl Credits: %f\n", TotalCredit);
    printf("Your SGPA is %f", SGPA);

    return 0;
}