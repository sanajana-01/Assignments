#include<stdio.h>
#include<stdlib.h>

int Count(int iNo)
{
    int iDigit = 0, iCount = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
        {
            iCount ++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int ivalue = 0, iRet = 0;
    
    printf("Enter Number : \n");
    scanf("%d",&ivalue);

    iRet = Count(ivalue);
    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}