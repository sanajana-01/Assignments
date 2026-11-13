#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, n = 0;
    n = 1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if (n > 9)
            {
                n = 1;
            }
            printf("%d \t",n);
            n++;
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue = 0, iValue1 = 0 ;

    printf("Enter number of rows : \n");
    scanf("%d",&iValue);

    printf("Enter number of columns : \n");
    scanf("%d",&iValue1);

    Pattern(iValue, iValue1);

    return EXIT_SUCCESS;
}