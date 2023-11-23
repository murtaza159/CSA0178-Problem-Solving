#include<stdio.h>
#include<math.h>


int main()
{
    int n;
    float sum=0;

    printf("For summing cubes of 'n' terms (Enter 0 to stop and provide sum),\nEnter n:");
    

    while(n)
    {
        if(n==0)
        break;

        else
        scanf("%d",&n);
        sum+=pow(n,3);
    }

    printf("Sum: %.0f",sum);

}