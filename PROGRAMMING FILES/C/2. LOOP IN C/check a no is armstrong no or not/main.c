#include <stdio.h>
int main()
{
    int n,i,r,k,cube=0;
    printf("Enter a no:\t ");
    scanf("%d",&n);
   
    k=n;
    while (n>0)
    {
        r=n%10;
        n=n/10;
        cube = cube + r*r*r;
    
    }
    if(k==cube)
        printf("%d is a ARMSTRONG No\n",k);
    else
        printf("%d is NOT a Armstrong no\n",k);
    return 0;
}
