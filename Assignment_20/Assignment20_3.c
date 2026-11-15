#include<stdio.h>
#include<stdlib.h>

void Pattren(int iRow, int iCol)
{
    int i = 0, j = 0;
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(iRow != iCol)
            {
                printf("Invalid Input\n");
                return ;
            }
            if (i == 1 || j == 1 || i == iRow || j == iCol || ((i + j) == (iCol+1)))
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows & coloumns : \n");
    scanf("%d%d", &iValue1, &iValue2);

    Pattren(iValue1, iValue2);

    return EXIT_SUCCESS;
}