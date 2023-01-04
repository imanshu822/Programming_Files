#include <stdio.h>
int main()
{
    int m,n,x,i,r,sum=0;
    printf("Enter 3 nos.\t");
    scanf("%d%d%d",&m,&n,&x);
    for(i=m;i<=n;i++)
    {
        r=i%x;
        if(r==0)
        {
            printf("%d\n",i);
            sum=sum+i;
        }
    }
    printf("sum = %d\n",sum);
}
