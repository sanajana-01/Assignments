#include<stdio.h>
#include<stdlib.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0,iFact = 1, iFact1 = 1, iFactDiff = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iFact = iFact * iCnt;
        }
        else
        {
            iFact1 = iFact1 * iCnt;
        }
    }
    iFactDiff = iFact - iFact1;
    return iFactDiff;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);
    printf("%d ",iRet);

    return EXIT_SUCCESS;
}