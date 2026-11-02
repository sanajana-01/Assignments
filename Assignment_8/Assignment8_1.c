#include<stdio.h>
#include<stdlib.h>

void Number(int iNo)
{
    int iCnt = 0;
    if(iNo < 50)
    {
        printf("Small ");
    }
    else if(iNo > 50 && iNo < 100)
    {
        printf("Medium ");
    }
    else
    {
        printf("Large ");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}