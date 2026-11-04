#include<stdio.h>
#include<stdlib.h>

int MultDigit(int iNo)
{
    int iDigit = 0, iMul = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
            iMul = iMul * iDigit;
        }
        iNo = iNo / 10;
    }
    return iMul;
}
int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = MultDigit(iValue);
    printf("%d",iRet);

    return EXIT_SUCCESS;
}