#include <stdio.h>
int main ()
{
    int p,n,sum=0;
    float avg;
    printf("How many numbers you want to print ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("Number %d :\t",i);
        scanf("%d",&p);
        sum=sum+p;
    }
    avg=sum/n;
    printf("Sum of %d nos is %d\n",n,sum);
    printf("Averager of %d nos is %.2f",n,avg);
    printf("\n");
    return 0;
}
