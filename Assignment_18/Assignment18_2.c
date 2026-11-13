#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if((i+j) < 6)
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
            }
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue = 0, iValue1 = 0;
    
    printf("Enter number of rows and coloumns : \n");
    scanf("%d %d",&iValue, &iValue1);

    Pattern(iValue, iValue1);

    return EXIT_SUCCESS;
}