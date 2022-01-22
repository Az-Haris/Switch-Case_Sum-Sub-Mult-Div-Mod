#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    float num1, num2, sum, sub, mult, div;
    int mod, select;
    printf("Please Enter 2 Number to Calculate : ");
    scanf("%f%f", &num1, &num2);
    printf(" Enter 1 for Summation\n Enter 2 for Subtraction\n Enter 3 for Multiplication\n Enter 4 for Division\n Enter 5 for Modulus\n\n Enter Your Choise : ");
    scanf("%d", &select);
    switch(select)
    {
        case 1 :
        {
            sum=num1+num2;
            printf("Summation Result is = %.2f", sum);
            break;
        }

        case 2 :
        {
            sub=num1-num2;
            printf("Subtraction Result is = %.2f", sub);
            break;
        }

        case 3 :
        {
            mult=num1*num2;
            printf("Multiple Result is = %.2f", mult);
            break;
        }

        case 4 :
        {
            div=num1/num2;
            printf("Division Result is = %.2f", div);
            break;
        }

        case 5 :
        {
            mod=(int)num1%(int)num2;
            printf("Modulus Result is = %d", mod);
            break;
        }

        default :
        {
            printf("\n\nUnknown Operation. Please Choose Any Operation listed on Above");
            break;
        }

    }


    getch();
    return 0;
}
