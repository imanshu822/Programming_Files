
#include <stdio.h>
int main()
{
    int n,r,sum=0,k;
    printf("Enter a no.\t");
    scanf("%d",&n);
    k=n;
    while (n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r;
        
    }
    printf("sum of digit os %d is %d:",k,sum);
}
