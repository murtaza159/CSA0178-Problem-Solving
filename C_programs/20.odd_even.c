#include<stdio.h>

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d",&number);

    if(number%2!=0)
    {
        printf("Odd Number");
    }
    else
    {
        printf("Even Number");
    }
}