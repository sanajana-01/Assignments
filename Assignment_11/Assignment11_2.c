#include<stdio.h>
#include<stdlib.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid range");
    }
    for(iStart = iStart; iStart <= iEnd; iStart++)
    {
        if((iStart % 2) == 0)
        {
            printf("%d \t",iStart);
        } 
    }
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Strating point : \n");
    scanf("%d",&iValue1);

    printf("Enter Ending point : \n");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1, iValue2);
    return EXIT_SUCCESS;
}