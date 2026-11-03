#include<stdio.h>
#include<stdlib.h>

void RangeDisplay(int iStart, int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid range");
    }
    for(iStart = iStart; iStart <= iEnd ; iStart++)
    {
        printf("%d \t",iStart);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter Starting point : \n");
    scanf("%d",&iValue1);

    printf("Enter Ending point : \n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1, iValue2);

    return EXIT_SUCCESS;
}