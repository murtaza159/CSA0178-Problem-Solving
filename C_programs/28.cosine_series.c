#include<stdio.h>


int main()
{
    int n;
    float x,temp,sum;

    printf("Enter x: ");
    scanf("%f",&x);
    x=x*3.14159/180;
    
    printf("Enter nth term of the series: ");
    scanf("%d",&n);

    temp=1;
    sum=1;
    

    for(int i=1;i<=n;i++)
    {
        temp = (temp*(-1)*x*x)/(2*i*(2*i-1));
        sum+=temp;
    }

    printf("The value of cosine %f : %.4f",x,sum);
}