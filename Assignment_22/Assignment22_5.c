#include<stdio.h>
#include<stdlib.h>

void Pattern(int iFrequency)
{
    int i = 0, iCal = 0;
    for (i = 1; i <= iFrequency; i++)
    {
        iCal = 2 * i;
        printf("%d\t",iCal);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency : \n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}