#include <stdio.h>
int main()
{
    int i,sum=0,n;
    printf("Enter 10 numbers\n");
    for (i=1;i<=10;i++)
    {
        printf("Enter no %d : ",i);
        scanf("%d",&n);
        sum=sum+n;
    }
    printf("Sum of all the no you have entered is %d\n",sum);
    printf("Average is %d\n",sum/10);
    return 0;
    
        
}
