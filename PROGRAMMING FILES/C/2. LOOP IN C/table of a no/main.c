#include <stdio.h>
int main()
{
    int i,n,t;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        t=n*i;
        printf("%d * %d = %d ",n,i,t);
        printf("\n");
        
    }return 0;
}

