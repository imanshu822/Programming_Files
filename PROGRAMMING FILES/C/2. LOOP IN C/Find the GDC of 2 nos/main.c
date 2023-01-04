#include <stdio.h>
int main()
{
    int n,m;
    printf("Enter 2 nos\t");
    scanf("%d%d",&m,&n);
    while (n!=m)
    {
        if (n>m)
            n=n-m;
        else if (n<m)
            m=m-n;
    }
    printf("GCD of is %d",m);
    printf("\n");
    return 0;
}
