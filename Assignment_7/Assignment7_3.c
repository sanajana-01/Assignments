#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0, count = iNo;
    if(iNo > 0)
    {
        iNo = iNo * -1;
        for(iCnt = iNo; iCnt <= count; iCnt++)
        {
            printf("%d \t",iCnt);
        }
    }
    else 
    { 
        iNo = -iNo;
        for(iCnt = count; iCnt <= iNo; iCnt++)
        {
            printf("%d \t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}