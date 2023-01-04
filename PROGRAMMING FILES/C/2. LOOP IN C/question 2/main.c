#include <stdio.h>
int main()
{
    int i,j,spc,n=5;
    for(i=1;i<=5;i++)
    {
        {
        for(spc=5;spc>i;spc--)
            printf("  ");
        for(j=1;j<=i;j++)
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}

