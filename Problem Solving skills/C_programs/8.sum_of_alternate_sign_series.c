#include<stdio.h>

int main()
{
    int nterms,sum=0;

    printf("For sum of 'n' terms,\nEnter n:");
    scanf("%d",&nterms);

    while(nterms!=0)
    {
        if(nterms%2!=0)
        {
            sum+=nterms;
        }
        else
        {
            sum-=nterms;
        }
        nterms-=1;
    }
    printf("Sum of alternative sign series: %d",sum);

}