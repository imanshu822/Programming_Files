#include <stdio.h>
int main()
{
    int i,n,A[100],count=0,m;
    printf("Enter no of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&A[i]);
    }
    printf("Enter the elements which freq you want");
    scanf("%d",&m);
    for(i=0;i<n;i++)
        if (A[i]==m)
            count++;
    printf("freq of the elements is %d\n",count);
}

