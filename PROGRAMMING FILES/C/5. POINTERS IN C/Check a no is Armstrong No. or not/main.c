// Write a program to check a no is Armstrong no or not
#include <stdio.h>
int main()
{
    int n,r,sum=0;
    printf("Enter a no. ");
    scanf("%d",&n);
    int k=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r*r*r;
        
    }
    if(k==sum)
        printf("%d is an armstrong no",k);
    else
        printf("%d is NOT an armstrong no",k);
    printf("\n");
    return 0;
    
}
