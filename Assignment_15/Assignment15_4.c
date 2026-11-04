#include<stdio.h>
#include<stdlib.h>


int Multiply(int iNo1, int iNo2, int iNo)
{
    int iRet = 0;

    if(iNo == 0 && iNo1 == 0 && iNo2 == 0)
    {
        return 0;
    }
    if(iNo == 0)
    {
        iNo = 1;
    }
    if (iNo1 == 0) 
    {
        iNo1 = 1;
    }
    if (iNo2 == 0)
    {
        iNo2 = 1;
    }
    
    iRet = iNo1 * iNo2 * iNo;

    return iRet;
}
int main()
{
    int iValue = 0, iValue1 = 0, iValue2 = 0, iret = 0;
    

    printf("Enter tree number : \n");
    scanf("%d %d %d",&iValue, &iValue1, &iValue2);

    iret = Multiply(iValue, iValue1, iValue2);
    printf("%d",iret);
    
    return EXIT_SUCCESS;
}