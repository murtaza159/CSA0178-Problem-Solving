#include<stdio.h>

int main()
{
    int number,sum=0,temp;

    printf("Enter number: ");
    scanf("%d",&number);
    temp=number;

    while(number>0)
    {
        sum+=number%10;
        number/=10;
    }

    printf("Sum of the digits of %d : %d",temp,sum);
}