#include <stdio.h>
int main()
{
    int i,n,count=0;
    printf("Enter a no to check Prime or not\t");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if (n%i==0)
            count++;
    }
    if (count == 2)
        printf("%d is a prime no",n);
    else
        printf("%d is NOT a prime no",n);
    printf("\n");
    return 0;
    
}
