#include<stdio.h>
#include<stdlib.h>


void DisplayGrade(float fNo)
{
    if(fNo < 0 && fNo > 100)
    {
        printf("Invalid Marks");
    }
    
    else if( fNo > 90)
    {
        printf("Grade A");
    }
    
    else if( fNo > 75)
    {
        printf("Grade B");
    }
    
    else if( fNo > 60)
    {
        printf("Grade C");
    }
    
    else if( fNo > 40)
    {
        printf("Grade D");
    }
    else 
    {
        printf("Fail");
    }
    
} 

int main()
{
    float fMarks = 0;

    printf("Enter Marks : \n");
    scanf("%d",&fMarks);
    
    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}