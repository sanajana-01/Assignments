#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f, fFinalAmount = 0.0f;
    if (fAmount <= 800)
    {
        printf("Payable Amount = %.2f ",fAmount);
    }
    else if(fAmount > 801 && fAmount < 5000)
    {
        fDiscount = fAmount * (10.0f/100.0f);
        fFinalAmount = fAmount - fDiscount;
        printf("Payable Amount = %.2f ",fFinalAmount);
    }
    else if(fAmount > 5000)
    {
        fDiscount = fAmount * (20.0f/100.0f);
        fFinalAmount = fAmount - fDiscount;
        printf("Payable Amount = %.2f ",fFinalAmount);
    }
    else 
    {
        printf("Invalid Input ");
    }
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount : \n");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}