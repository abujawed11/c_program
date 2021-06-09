#include <stdio.h>

float kmTomil()
{
    float mil, km;
    int op;
    printf("Enter KM value: ");
    scanf("%f", &km);
    mil = 0.621371 * km;
    printf("%f km = %f mile\n", km, mil);
}

float inTofoot()
{
    float in, foot;
    int op;
    printf("Enter Inch value: ");
    scanf("%f", &in);
    foot = (1 / 12.0) * in;
    printf("%f in = %f foot\n", in, foot);
}

float poTokg()
{
    float po, kg;
    int op;
    printf("Enter Pound value: ");
    scanf("%f", &po);
    kg = 0.453592 * po;
    printf("%f pound = %f kg\n", po, kg);
}

float inTomtr()
{
    float in, mtr;
    int op;
    printf("Enter Inch value: ");
    scanf("%f", &in);
    mtr = 0.0254 * in;
    printf("%f inch = %f meter\n", in, mtr);
}

int main()
{
    int op, type;
    while (1)
    {
        printf("Select the conversion u want to do: \n");
        printf("1: km -> miles\n2: inches -> foot\n3: pound -> kgs\n4: inches -> meter\n5: Exit\n");
        scanf("%d", &type);
        if (type == 5)
        {
            break;
        }
        if (type > 5)
        {
            printf("Wrong Value entered\n");
            continue;
        }
        switch (type)
        {
        case 1:
            kmTomil();
            break;
        case 2:
            inTofoot();
            break;
        case 3:
            poTokg();
            break;
        case 4:
            inTomtr();
            break;
        default:
            break;
        }
        printf("Do you want to do more conversion?\n1: Yes\t2: No\n");
        scanf("%d", &op);
        if (op == 1)
        {
            continue;
        }
        else
        {
            break;
        }
    }
}