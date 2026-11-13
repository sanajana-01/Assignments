#include<stdio.h>
#include<stdlib.h>

void Pattern (int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow ; i++)
    {
        for(j = 1; j <= iCol * 2; j++)
        {
            if (j % 2 == 0 && i % 2 != 0)
            {
                printf("%d \t",j);
            }
            
            if (i % 2 == 0 && j % 2 != 0)
            {
                printf("%d \t",j);
            }
            
        }
        printf("\n\n");
    }
}
int main ()
{
    int ivalue1 = 0, ivalue2 = 0;

    printf("Enter number of rows: \n");
    scanf("%d",&ivalue1);

    printf("Enter number of columns: \n");
    scanf("%d",&ivalue2);

    Pattern(ivalue1, ivalue2);

    return EXIT_SUCCESS;
}