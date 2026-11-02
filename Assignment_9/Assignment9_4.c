#include<stdio.h>
#include<stdlib.h>

int OodFactorial(int iNo)
{
    int iCnt = 0,iFact = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = OodFactorial(iValue);
    printf("%d ",iRet);

    return EXIT_SUCCESS;
}