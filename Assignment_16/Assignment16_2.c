#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow,int iCol)
{
    int i = 0, j = 0 ;
    char ch = '\0';
    char ch1 = '\0';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, ch = 'a', ch1 = 'A'; j <= iCol; j++)
        {
            if (i % 2 == 0)
            {
                printf("%c\t", ch);
                ch++;
            }
            else
            {
                printf("%c\t", ch1);
                ch1++;
            }
        }
        printf("\n\n");
    }   
}
int main()
{
    int iValue1 = 0,iValue2 = 0;
    
    printf("Enter number of rows : \n");
    scanf("%d",&iValue1);

    printf("Enter number of coloums : \n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}