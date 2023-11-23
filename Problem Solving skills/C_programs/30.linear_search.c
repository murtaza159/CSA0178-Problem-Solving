#include<stdio.h>

int main()
{
    int search,list_size, indicator=0, position, integer_array[20];

    printf("Enter number of elements to add: ");
    scanf("%d",&list_size);

    printf("Enter elements for your list:\n");
    for(int i=0;i<list_size;i++)
    {
        scanf("%d",&integer_array[i]);
    }

    printf("Enter element to be searched: ");
    scanf("%d",&search);

    for(int i=0;i<list_size;i++)
    {
        if(search==integer_array[i])
        {
            indicator=1;
            position=i;
            break;
        }

    }
    if(indicator==1)
    printf("Your element %d is found at index position %d",search,position);
    else
    printf("Your element coundn't be found");

}