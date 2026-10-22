#include <stdio.h>
#include <stdlib.h>

void CheckLeapYear(int iNo)
{
    return (iNo%4 == 0);
}

int main()
{
    int iValue = 0;
    bool bRet = false;
    
    printf("Enter year : \n");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);
    if(bRet == true)
    {
        printf("Leap year");
    }
    else
    {
        printf("Not a Leap Year");
    }  
    
    return EXIT_SUCCESS;
}
