#include<stdio.h>
#include<stdlib.h>

void OodDisplay(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1;iCnt <= iNo; iCnt++)
    {
        printf("*  \t");
    }
    for(iCnt = 1;iCnt <= iNo; iCnt++)
    {
        printf("#  \t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    OodDisplay(iValue);

    return EXIT_SUCCESS;
}