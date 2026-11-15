#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow)
{
    int i = 0;
    for(i = iRow; i >= 1; i--)
    {
        printf("%d\t#\t",i);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the frequency : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}