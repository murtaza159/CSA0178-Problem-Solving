#include<stdio.h>

int main()
{
    int integer1, integer2, temp;

    printf("Enter Integer 1: ");
    scanf("%d",&integer1);

    printf("Enter Integer 2: ");
    scanf("%d",&integer2);

    temp      = integer1;
    integer1  = integer2;
    integer2  = temp;


    printf("Integer 1: %d\n",integer1);
    printf("Integer 2: %d",integer2);

}