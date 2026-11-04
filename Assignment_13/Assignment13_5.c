#include<stdio.h>
#include<stdlib.h>

int CountDiff(int iNo)
{
    int iDigit = 0, iSum = 0, iSum1 = 0, diff = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if ((iDigit % 2) == 0)
        {
            iSum = iSum + iDigit;
        }
        else
        {
            iSum1 = iSum1 + iDigit;
        }
        iNo = iNo / 10;
    }
    diff = iSum - iSum1;
    return diff;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);
    printf("%d\n",iRet);

    return EXIT_SUCCESS; 
}