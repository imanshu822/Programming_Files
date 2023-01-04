#include <stdio.h>
int main()
{
    int i,n,sum=0;
    for(i=1;i<=10;i++)
    {
        printf("Enter no.%d :\t",i);
        scanf("%d",&i);
        if (n>0)
        sum=sum+i;
        else
            continue;
    }
    printf("Sum= %d",sum);
    return 0;
}
