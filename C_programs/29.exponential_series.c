#include<stdio.h>


int main()
{
    int n;
    float x,temp,sum;

    printf("Enter x: ");
    scanf("%f",&x);

    printf("Enter nth term of the series: ");
    scanf("%d",&n);

    temp=1;
    sum=1;
    

    for(int i=1;i<=n;i++)
    {
        temp = (temp*(-1)*x)/(i);
        sum+=temp;
    }

    printf("The exponential value of %f : %.4f",x,sum);
}