#include <stdio.h>
int arms(int);
int main()
{
    int m,n,i;
    printf("Enter 2 no: ");
    scanf("%d%d",&m,&n);
    printf("Armstrong numbers between %d and %d are\n",m,n);
    for (i=m;i<=n;i++)
    {
        int y;
        y = arms(i);
        if(i==y)
        printf("%d\t",i);
    }
    printf("\n");
    return 0;
}
int arms(int n)
{
    int r=0,cube=0;
    while (n>0)
    {
        r=n%10;
        n=n/10;
        cube = cube + r*r*r;
    }
    return cube;
}
