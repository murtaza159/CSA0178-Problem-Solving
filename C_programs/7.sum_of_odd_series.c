#include<stdio.h>

int main()
{
    int nterms,sum=0;

    printf("For sum of odd series of 'n' terms,\nEnter n:");
    scanf("%d",&nterms);

    while(nterms!=0)
    {
        sum+=(nterms*2)-1;
        nterms-=1;
    }
    printf("Sum of n odd numbers: %d",sum);
}