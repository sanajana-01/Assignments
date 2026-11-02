#include<stdio.h>
#include<stdlib.h>


int KMtoMeter(int iNo)
{
    int iTometer = 0;
    iTometer = iNo * 1000;
    return iTometer;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance : \n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);
    printf("Distance from KM to Meter is : %d \n",iRet);

    return EXIT_SUCCESS;
}