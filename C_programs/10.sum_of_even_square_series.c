#include<stdio.h>
#include<math.h>

int main()
{
    int nterms,sum=0;

    printf("For sum of square of even 'n' terms,\nEnter n: ");
    scanf("%d",&nterms);

    while(nterms!=0)
    {
        sum+=pow(nterms*2,2);
        nterms-=1;
    }
    printf("Sum of squares of even seires: %d",sum);

}