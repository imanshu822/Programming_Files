#include <stdio.h>
int main()
{
    
    int n,r,t=0;
    printf("Enter a no.\t");
    scanf("%d",&n);
    int k=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        t= t + r*r*r;
    }
    printf("Sum of qube of all digits of %d is %d",k,t);
    printf("\n");
    if (t==k)
        printf("%d is an AMSTRONG no.",k);
    else
        printf("%d is NOT a Amstrong no.",k);
    printf("\n");
    return 0;
}
