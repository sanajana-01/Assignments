#include <stdio.h>
#include <stdlib.h>

double CircleArea(float fVal)
{
    double dArea = 0.0f;

    if(dArea < 0)
    {
        dArea = -dArea;
    }

    dArea = 3.14 * fVal * fVal;
    return dArea;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Number : \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is : %f \n",dRet);

    return EXIT_SUCCESS;
}