#include <stdio.h>
int main()
{
    int i,j,spc,n=5;
    for(i=1;i<=5;i++)
    {
        {
        for(spc=1;spc<i;spc++)
            printf("  ");
        for(j=5;j>=i;j--)
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}


