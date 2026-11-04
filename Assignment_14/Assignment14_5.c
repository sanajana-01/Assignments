#include<stdio.h>
#include<stdlib.h>

int FactDiff(int iNo)
{
    int iCnt = 0, iSum1 = 0, iSum = 0, diff = 0;
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
        else
        {
            iSum1 = iSum1 + iCnt;
        }
    }
    diff = iSum - iSum1;
    return diff;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("%d",iRet);

    return EXIT_SUCCESS;
}