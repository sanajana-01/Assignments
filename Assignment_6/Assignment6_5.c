#include<stdio.h>
#include<stdlib.h>


void CheckTringle(float Salary,int iYears)
{
    float fBonus = 0.0f;
    if(iYears < 5)
    {
        fBonus = 10000 *(5.0f/100.0f);
        printf("Bonus = %.2f \n",fBonus);
    }
    else if(iYears >= 5 && iYears < 10)
    {
        fBonus = 20000 *(10.0f/100.0f);
        printf("Bonus = %.2f \n",fBonus);
    }
    if(iYears > 10)
    {
        fBonus = 30000 *(15.0f/100.0f);
        printf("Bonus = %.2f\n",fBonus);
    }
}
int main()
{
    int iYears = 0;
    float fSalary = 0.0f;

    printf("Enter salary and years of service : \n");
    scanf("%f %d", &fSalary, &iYears);

    CheckTringle(fSalary, iYears);

    return EXIT_SUCCESS;
}