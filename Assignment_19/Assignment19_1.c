#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iRow; j++)
        {
            if(iRow != iCol)
            {
                printf("Invalid Input\n");
                return ;
            }
            if(j <= i)
            {
                printf("*\t");
            }
        }
        printf("\n\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of rows & coloumns  :\n");
    scanf("%d%d",&iValue1, &iValue2);

    Pattern (iValue1, iValue2);

    return EXIT_SUCCESS;
}