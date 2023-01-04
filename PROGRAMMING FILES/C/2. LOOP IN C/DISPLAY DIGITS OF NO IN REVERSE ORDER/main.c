#include <stdio.h>
int main()
{
    int i,n,rev=0,r;
    printf("Enter a no");
    scanf("%d",&n);
    int k=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    printf("reverse of %d is %d \n",k,rev);
    return 0;
}
