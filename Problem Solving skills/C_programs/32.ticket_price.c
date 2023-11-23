#include<stdio.h>

int main()
{
    int age, price=0;

    printf("Enter age: ");
    scanf("%d",&age);


    if(age>=55 || age>=13 && age<=20)
    {
        price+=10;
    }

    else if(age>=21 && age<=54)
    {
        price+=15;
    }
    else if(age>=3 && age<=12)
    {
        price+=5;
    }
    
    
    printf("Ticket Price : %d$",price);
}