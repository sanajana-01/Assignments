#include<stdio.h>
#include<stdlib.h>
void Pattern(int iRow,int iCol)
{
    int i = 0, j = 0, k = 0;
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 == 0)
            {
                k = j * -1;
                printf("%d\t",k);
            }
            else
            {
                printf("%d\t",j);
            }
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue = 0, iValue1 = 0;

    printf("Enter number of rows : \n");
    scanf("%d",&iValue);

    printf("Enter number of coloumns : \n");
    scanf("%d",&iValue1);

    Pattern(iValue,iValue1);

    return EXIT_SUCCESS;
}