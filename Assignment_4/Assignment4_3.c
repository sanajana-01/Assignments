#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iFirst, int iSecond)
{
    if(iFirst == iSecond)
    {
        printf("Both Numbers Are Equal");
    }
    else if(iFirst > iSecond)
    {
        printf("%d is Greater",iFirst);
    }
    else
    {
        printf("%d is Greater",iSecond);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter two number : ");
    scanf("%d %d",&iValue1, &iValue2);

    FindGreater(iValue1,iValue2);

    return EXIT_SUCCESS;
}