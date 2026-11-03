#include <stdio.h>
#include<stdlib.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    int iSum = 0;
    if(iStart > iEnd)
    {
        printf("Invalid range");
    }
    else
    {
        for(iEnd = iEnd; iEnd >= iStart; iEnd--)
        {
            printf("%d \t",iEnd);
        }
    }
}


int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting point : \n");
    scanf("%d",&iValue1);

    printf("Enter Endinng point : \n");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);
  
    return EXIT_SUCCESS;
}