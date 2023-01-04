 /*
    * * * * * * *
    * * *   * * *
    * *       * *
    *           *
*/

#include <stdio.h>
int main()
{
    int n,i,j,k,l,spc;
    printf("Enter no of rows.\t");
    scanf("%d",&n);
    k=2*n;
    l=n+1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<k;j++)
        {
            printf("*");
        }
        {
            for(spc=0;spc<=l;spc+=2);
            printf(" ");
        }
        for(j=1;j<=k;j++)
        {
            printf("*");
        }
        {
            for(spc=0;spc<=l;spc++);
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
