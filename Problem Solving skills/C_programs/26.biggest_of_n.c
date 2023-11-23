#include<stdio.h>
#include<math.h>


int main()
{
    int n, biggest;

    printf("For biggest of 'n' terms (Enter 0 to stop and provide result),\nEnter n:");
    scanf("%d",&n);
    biggest=n;

    while(n)
    {
        if(n==0)
        break;

        else
        if(biggest<=n)
        biggest=n;
        scanf("%d",&n);

    }

    printf("Biggest Number: %d",biggest);

}