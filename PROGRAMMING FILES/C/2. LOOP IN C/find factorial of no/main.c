
#include <stdio.h>
int main()
{
    int n ,fact=1;
    printf("Enter a no.: ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        
        fact=fact * i;
    }
    printf("Factorial of %d n is : %d",n,fact);
    printf("\n");
    return 0;
}
