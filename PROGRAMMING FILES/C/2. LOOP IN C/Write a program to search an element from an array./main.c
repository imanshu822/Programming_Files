#include <stdio.h>
int main()
{
    int  n,i,e,flag=0,loc;
    int a[n];
    printf("Enter the size of array ");
    scanf("%d",&n);
    printf("Enter elements ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("which no you want to find in array ");
    scanf("%d",&e);
    for (i=0;i<=n;i++)
    {
        if(a[i]==n)
        {
            loc=i;
            flag=1;
            break;
        }
    }
    if (flag==0)
        printf("%d is not present in array\n",e);
    else
        printf("%d is present in array at %d\n",e,loc+1);
}
