#include <stdio.h>
int  main()
{
    int m,n,i,x,r,sum=0;
    printf("Enter 3 nos .\t");
    scanf("%d%d%d",&m,&n,&x);
    i=m;
    while (i<=n)
    {
        r=i%x;
        if(r==0)
        {
            printf("%d\n",i);
            sum=sum+i;
        }
        i++;
    }
    printf("sum is %d\n",sum);
    return 0;
}
