#include<stdio.h>
#include<stdlib.h>
void Pattern(int iRow)
{
    int i = 0;

    for(i = 1; i <= iRow; i++)
    {
        printf("%d\t*\t",i);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number of rows : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}