#include<stdio.h>
#include<stdlib.h>

double SquareMeter(float fValue)
{
    double dRet = 0.0f;

    dRet = fValue * 0.0929;
    return dRet;
}
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;
 
    printf("Enter Area in Square feet : \n");
    scanf("%f",&fValue);

    dRet = SquareMeter(fValue);
    printf("Are in Square Meter is : %f \n",dRet);
}