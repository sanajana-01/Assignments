#include<stdio.h>

bool check(char cvalue)
{
    return(cvalue == 'a' || cvalue == 'e' || cvalue == 'i' || cvalue == 'o' || cvalue == 'u'
        || cvalue == 'A' || cvalue == 'E' || cvalue == 'I' || cvalue == 'O' || cvalue == 'U');
}

int main()
{
    char cValue = '\0';
    bool bRet = false; 

    printf("Enter Character : \n");
    scanf("%c",&cValue);

    bRet = check(cValue);
    if(bRet == true)
    {
        printf("TRUE");
    }
    else 
    {
        printf("FALSE");
    }

    return 0;
}