// Input: 80 → (80 \times 5 = ₹400)
// Input: 150 → ((100 \times 5) + (50 \times 7) = ₹850)
// Input: 250 → ((100 \times 5) + (100 \times 7) + (50 \times 10) = ₹1700)

#include<stdio.h>
#include<stdlib.h>


void CalculateElectricityBill(int iNo)
{
    float fBill = 1;
    if(iNo <= 100)
    {
        fBill = (float) 5 * (float)iNo;
        printf("%.2f",fBill);
    }
    
    else if(iNo > 100)
    {
        float fTotal1 = 0.0f, fBill1 = 1, fRet = 0.0f;

        fTotal1 = (float)iNo - (float)100;   
        fBill1 = (float) 5 * (float)100;    //first 100 units
        fBill = (float) 7 * (float)fTotal1; //next 100 units

        fRet = fBill1 + fBill;
        printf("%.2f",fRet);
    }
    else 
    {
        float fTotal1 = 0.0f, fBill1 = 1,fBill2 = 1,fBill3 = 1,fBill4 = 1, fRet = 0.0f,bill;

        fTotal1 = (float)iNo - (float)100;  //first 100 units  
        fBill1 = fTotal1 - (float)100;      //next 100 units
        bill = (float)iNo - (fBill2 + fBill3);   

        fBill2 = (float) 5 * fTotal1; 
        fBill3 = (float) 7 * fBill1;  
        fBill4 = (float) 10 * bill;

        fRet = fBill2 + fBill3 + fBill4;
        printf("%.2f",fRet);
    }
    
} 

int main()
{
    int iUnits = 0;

    printf("Enter consumed units : \n");
    scanf("%d",&iUnits);
    
    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}