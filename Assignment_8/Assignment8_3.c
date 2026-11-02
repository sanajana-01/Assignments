#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{
    int iCnt = 0, iFact = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1;iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0, iResult = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iResult = Factorial(iValue);
    printf("%d",iResult);

    return EXIT_SUCCESS;
}