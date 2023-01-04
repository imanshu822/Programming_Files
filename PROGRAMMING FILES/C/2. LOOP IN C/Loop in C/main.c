// find the factors of a no.
#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter a no\t");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
        printf("SUM OF FIRST %d no is %d\n",n,sum);
    
    return 0;
}
