#include <stdio.h>
#include<stdlib.h>

int RangeSum(int iStart, int iEnd)
{
    int iSum = 0;
    if(iStart > iEnd || iStart < 0 || iEnd < 0)
    {
        printf("Invalid range");
        return -1;
    }
    else
    {
        for(iStart = iStart; iStart <= iEnd; iStart++)
        {
            if((iStart % 2) == 0)
            {
                iSum = iSum + iStart;
            }
        }
    }
    return iSum;
}


int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iResult = 0;

    printf("Enter Starting point : \n");
    scanf("%d",&iValue1);

    printf("Enter Endinng point : \n");
    scanf("%d",&iValue2);

    iResult = RangeSum(iValue1,iValue2);
    if(iResult != -1)
    {
        printf("%d",iResult);
    }

    return EXIT_SUCCESS;
}