#include<stdio.h>



int main()
{
    int n, sum=0, count=-1;

    printf("For summing 'n' terms (Enter 0 to stop and provide sum and average),\nEnter n:");
    

    while(n)
    {
        if(n==0)
        break;

        else
        scanf("%d",&n);
        sum+=n;
        count++;
    }
    float average = (float)sum/count;

    printf("Sum: %d\nAverage: %.2f",sum,average);

}