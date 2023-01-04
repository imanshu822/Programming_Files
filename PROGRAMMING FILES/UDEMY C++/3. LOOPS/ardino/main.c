#include <stdio.h>
int main()
{
    int n,m;
    printf("Enter 2 nos");
    scanf("%d%d",&n,&m);
    int x=m,y=n;
    while(n!=m)
    {
        if (n>m)
            n=n-m;
        else if (m>n)
            m=m-n;
    }
    printf("hcf of %d and %d is %d\n",x,y,n);
    return 0;
}
