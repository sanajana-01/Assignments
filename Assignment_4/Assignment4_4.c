#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iValue)
{
    if (iValue <= 0)
    {
        printf("Invalid Age ");
    }
    if(iValue >= 18)
    {
        printf("Eligible for Voting ");
    }
    else 
    {
        printf("Not Eligible for Voting ");
    }
    
}

int main()
{
     int iAge = 0;

    printf("Enter a number : \n");
    scanf("%d", &iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}