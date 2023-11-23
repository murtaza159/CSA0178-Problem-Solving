#include<stdio.h>

int main()
{
    int nterms,sum=0;

    printf("For sum of even series of 'n' terms,\nEnter n:");
    scanf("%d",&nterms);

    while(nterms!=0)
    {
        sum+=nterms*2;
        nterms-=1;
    }
    printf("Sum of n even numbers: %d",sum);
}