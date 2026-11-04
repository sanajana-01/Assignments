#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
int main()
{
    int iValue = 0, iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Enter two number : \n");
    scanf("%d %d",&iValue, &iValue2);

    bRet = ChkEqual(iValue, iValue2);
    if(bRet == TRUE)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }
    return EXIT_SUCCESS;
}