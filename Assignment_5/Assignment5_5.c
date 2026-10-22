#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void DisplayConvert(char CValue)
{
    if(CValue >= 'A' && CValue <= 'Z')
    {
        printf("Uppercase Alphabet");
    }
    else if(CValue >= 'a' && CValue <= 'z')
    {
        printf("Lowercase Alphabet");
    }
    else if(isdigit(CValue)) 
    {
        printf("Digit");
    }
    else
    {
        printf("Special Character");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Character : \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}