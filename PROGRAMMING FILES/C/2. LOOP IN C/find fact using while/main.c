#include <stdio.h>
int main()
{
    int n,i,fact=0;
    printf("Enter a no.\t");
    scanf("%d",&n);
    i=1;
    while(i<n)
    {
        fact = fact * i;
        i++;
    }
    printf("%d",fact);
    return 0;
}
