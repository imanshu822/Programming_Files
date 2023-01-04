#include <stdio.h>
int main()
{
    int n,r,rev=0;
    printf("Enter a no\t");
    scanf("%d",&n);
    int k=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    printf("Reverse of %d is %d\n",k,rev);
    if (k==rev)
        printf("%d is Paindrome no",k);
    else
        printf("%d is NOT Palindrome no",k);
    printf("\n");
    return 0;
}
