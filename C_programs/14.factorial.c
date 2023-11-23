#include<stdio.h>

int main()
{
    int factorial_number, factorial_product=1;

    printf("Enter number to calculate factorial: ");
    scanf("%d",&factorial_number);

    while(factorial_number!=0)
    {
        factorial_product*=factorial_number;
        factorial_number-=1;
    }

    printf("Factorial of the given number: %d",factorial_product);

}