#include<stdio.h>
#include<stdlib.h>

double FhtoCS(float fValue)
{
    double dRet = 0.0f;

    dRet = (fValue - 32) *((double)5/9);
    return dRet;
}
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Temprature in Fafrenheit : \n");
    scanf("%f",&fValue);

    dRet = FhtoCS(fValue);
    printf("Temprature in Celcius is : %f \n",dRet);
}