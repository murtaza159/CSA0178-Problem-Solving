#include<stdio.h>

int main()
{
    int nterms;
    int t1=0, t2=1, sum=0;
    
    printf("For fibonacci series of 'n' terms,\nEnter n: ");
    scanf("%d",&nterms);
    if(nterms>2)
    {
        nterms-=2;
        printf("%d, %d, ",t1,t2);
        while(nterms-1>0)
        {
            sum=t1+t2;
            printf("%d, ",sum);
            t1=t2;
            t2=sum;
            nterms-=1;
        }
        printf("%d.",t1+t2);
    }
    else if(nterms==2)
    {
        printf("%d, %d.",t1,t2);
    }
    else if(nterms==1)
    {
        printf("%d.",t1);
    }
    else{
        printf("Please enter valid nuumber of terms");
    }
}