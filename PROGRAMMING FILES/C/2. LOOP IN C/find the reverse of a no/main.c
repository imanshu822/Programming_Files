#include <stdio.h>
int main()
{
    int n,r,rev=0,k;
    printf("Enter a no.\t");
    scanf("%d",&n);
    k=n;
    while (n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
        
    }
    printf("Reverse of %d is %d:",k,rev);
}
