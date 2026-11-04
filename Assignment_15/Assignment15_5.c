#include<stdio.h>
#include<stdlib.h>

float Percentage(int iNo1, int iNo2)
{
    float Fpercent = 0.0f;

    if(iNo1 == 0 || iNo2 == 0)
    {
        return 0;
    }
    Fpercent = ((float)iNo2 / (float)iNo1) * (float)100;

    return Fpercent;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Enter total marks: \n");
    scanf("%d",&iValue1);

    printf("Enter obtained marks : \n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1, iValue2);
    if(fRet == 0)
    {
        printf("Invalid Input");
    }
    else
    {
        printf("%.2f %%",fRet);
    }
   
    
    return EXIT_SUCCESS;
}