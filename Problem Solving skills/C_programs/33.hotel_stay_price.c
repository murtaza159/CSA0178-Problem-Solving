#include<stdio.h>
#include<string.h>

int main()
{
    int people, age;
    float price=0;
    char answer;
    printf("Enter number of people: ");

    switch( scanf("%d",&people))
    {
        case 2:
            price+=85.0;
            break;

        case 3:
            price+=90.0;
            break;
        
        case 4:
            price+=95.0;
            break;
        
        default:
            price = 95 + (people-4)*6;
            break;
    }

    printf("Enter age: ");
    scanf("%d",&age);

    printf("Are you on company business? (y/n): ");
    scanf("%s",&answer);

    if(answer == 'y' || answer == 'Y')
    {
        price = price - price*0.2;
    }
    else if((answer == 'n' || answer == 'N') && age>=60)
    {
        price = price - price*0.15;
    }
    else{
        price;
    }

    printf("Cost of the room: %.f$", price);

}