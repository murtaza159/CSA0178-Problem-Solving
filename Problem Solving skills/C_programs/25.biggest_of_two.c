#include<stdio.h>

int main()
{
    int number1, number2;

    printf("Enter number 1: ");
    scanf("%d",&number1);

    printf("Enter number 2: ");
    scanf("%d",&number2);

    if(number1>number2)
    {
        printf("%d is greater",number1);
    }
    else if(number2>number1)
    {
        printf("%d is greater",number2);
    }
    else
    {
        printf("Both are equal");
    }
}