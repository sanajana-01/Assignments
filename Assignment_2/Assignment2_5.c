#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    return (iNo%2 == 0);
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    
    printf("Enter number \n");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);
    if(bRet == true)
    {
        printf("number is Even");
    }
    else
    {
        printf("number is Ood");
    }  
    return 0;
}
