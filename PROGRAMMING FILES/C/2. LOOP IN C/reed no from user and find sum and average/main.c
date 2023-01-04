#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter how many no you want to print:\t");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter Number %d\t",i);
        scanf("%d",&i);
        sum =sum + i;
    }
    printf("Sum all no is %d\n",sum);
    printf("Average is : %f\n",(float)sum/n);
    return 0;
   
    
        
}
   

