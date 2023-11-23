#include<stdio.h>

int main()
{
    int nterms,sum=0;

    printf("For sum of 'n' terms,\nEnter n:");
    scanf("%d",&nterms);

    while(nterms!=0)
    {
        sum+=nterms;
        nterms-=1;
    }
    printf("Sum: %d",sum);
}