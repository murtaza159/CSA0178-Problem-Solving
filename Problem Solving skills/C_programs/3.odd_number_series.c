#include<stdio.h>

int main()
{
    int nterms,i=1;

    printf("For 'n' odd terms,\nEnter n:");
    scanf("%d",&nterms);

    while(i!=nterms)
    {
        printf("%d, ",(i*2)-1);
        i+=1;
    }
    printf("%d.",(nterms*2)-1);
}