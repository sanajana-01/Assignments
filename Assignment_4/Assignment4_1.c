#include <stdio.h>
#include <stdlib.h>

void CheckNumber(int iValue)
{
    if(iValue == 0)
    {
        printf("Neither Positive Nor Negative.");
    }
    else if(iValue > 0)
    {
        printf("Positive Number ");
    }
    else
    {
        printf("Negative Number ");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}