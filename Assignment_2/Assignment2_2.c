#include<stdio.h>

void Display(int ino)
{
    while(ino > 0)
    {
        printf(" * ");
        ino --;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}