#include<stdio.h>
#include<math.h>

int armstrong_calculations(int number)
{
    int temp,sum=0,digit_count=0;
    temp=number;

    while(temp>0)
    {
        digit_count+=1;
        temp=temp/10;
    }
    while(number>0)
    {
        sum+=pow(number%10,digit_count);
        number=number/10;

    }
    return sum;
}

int main()
{
    int number;

    printf("Enter armstrong number: ");
    scanf("%d",&number);

    if(armstrong_calculations(number)==number)
    {
        printf("YES. It is an Armstrong number");
    }
    else
    {
        printf("NO. It is not an Armstrong number");
    }
}