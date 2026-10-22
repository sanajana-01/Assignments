#include <stdio.h>

void DisplayConvert(int CValue)
{
    if(CValue >= 'A' && CValue <= 'Z')
    {
        printf("%c",CValue = CValue + 32);
    }
    else 
    {
        printf("%c",CValue = CValue - 32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Character : \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}