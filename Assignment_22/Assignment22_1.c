#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow)
{
    int i = 0;
    char ch = '\0';
    for(i = 1 ,ch = 'A'; i <= iRow; i++, ch++)
    {
        printf("%c\t",ch);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the frequency : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}