#include<stdio.h>
#include<math.h>

int main()
{
    int nterms,sum=0;

    printf("For sum of 'n' terms,\nEnter n: ");
    scanf("%d",&nterms);

    while(nterms!=0)
    {
        sum+=pow(nterms,nterms);
        nterms-=1;
    }

    printf("Sum of corresponsing power series: %d",sum);
}