#include <stdio.h>
int main ()
{
    int n,sum=0;
    printf("Enter a no : ");
    scanf("%d",&n);
    
    for (int i=1;i<=n;i++)
    {
        
        printf("%d\t",i*2);
        sum+=i*2;
    }
    printf("\n");
    printf("%d",sum);
    
    printf("\n");
    return 0;
}
