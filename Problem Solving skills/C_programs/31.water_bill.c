#include<stdio.h>

int main()
{
    int usage;
    float sum=15.0;

    printf("Enter amount of water usage (in cubic feet): ");
    scanf("%d",&usage);

    while(usage>0)
    {
        if(usage>3000)
        {
            sum=70;
            break;
        }
        else if(usage>2000 && usage<=3000)
        {
            sum+=(usage-2000)*(0.02);
            usage = 2000;
        }
        else if(usage>1000 && usage<=2000)
        {
            sum+=(usage-1000)*(0.0175);
            break;
        }
        else{
            usage=0;
        }
    }
    printf("Your water bill would exactly come to : %.2f$",sum);
}