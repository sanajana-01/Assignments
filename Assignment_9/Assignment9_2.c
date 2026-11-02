#include<stdio.h>
#include<stdlib.h>

int DollerToINR(int iNo)
{
    int iInr = 0;
    iInr = iNo * 70;
    return iInr;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = DollerToINR(iValue);
    printf("%d ",iRet);

    return EXIT_SUCCESS;
}