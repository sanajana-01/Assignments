#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisibility(int iNo)
{
    if(iNo % 5 == 0 && iNo % 3 == 0)
    {
        printf("Divisible by Both.");
    }
    else if(iNo % 5 == 0)
    {
        printf("%d is Divisible by 5.",iNo);
    }
    else if(iNo % 3 == 0)
    {
        printf("%d is Divisible by 3.",iNo);
    }
    else
    {
        printf("Not Divisible by Either");
    }
} 

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);
    
    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}