#include<stdio.h>

int main()
{
    int last_number,i=0;

    printf("For series upto 'n',\nEnter n:");
    scanf("%d",&last_number);

    while(i!=last_number-1)
    {
        printf("%d, ",i+1);
        i=i+1;
    }
    printf("%d.",last_number);

    
}