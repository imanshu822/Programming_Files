#include <stdio.h>
int main()
{
    int i,n,k,sum=0;
    printf("Enter a no.");
    scanf("%d",&n);
    k=n;
    for(i=1;i<=n;i++)
    {
        if (n%i==0)
            sum=sum+i;
    }
    if (sum==2*k)
        printf("%d is a PERFECT no ",k);
        else
            printf("%d is NOT A PERFECT no",k);
    printf("\n");
    return 0;
}
