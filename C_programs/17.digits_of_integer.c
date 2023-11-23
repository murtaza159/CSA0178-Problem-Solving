#include<stdio.h>

int main()
{
    int number,sum=0;

    printf("Enter number: ");
    scanf("%d",&number);

    while(number>0)
    {
        sum=(sum*10)+number%10;
        number/=10;
    }
    printf("The digits of the integer are:\n");
    while(sum>10)
    {
        printf("%d, ",sum%10);
        sum/=10;
    }
    printf("%d.",sum%10);
    
}