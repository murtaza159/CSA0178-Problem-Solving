#include<stdio.h>

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d",&number);

    if(number>0)
    {
        printf("Positive Integer");
    }
    else if(number<0)
    {
        printf("Negative Integer");
    }
    else
    {
        printf("Zero");
    }
}