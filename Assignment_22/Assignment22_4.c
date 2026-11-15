#include<stdio.h>
#include<stdlib.h>
void Pattern(int iFrequency)
{
    int i = 0;

    for(i = 1; i <= iFrequency; i++)
    {
        printf("#\t%d\t*\t",i);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the Frequency : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}