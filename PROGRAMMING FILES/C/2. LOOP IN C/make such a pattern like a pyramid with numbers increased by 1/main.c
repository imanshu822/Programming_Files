//  make such a pattern like a pyramid with numbers increased by 1
//  Created by ANSHU on 13/11/21.

#include <stdio.h>
int main()
{
    int n,k,spc,t=1;
    printf("Enter no of rows:\t");
    scanf("%d",&n);
    spc=n-1;
    for(int i=1;i<=n;i++)
    {
        for (k=n-1;k>=i;k--)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
        printf("* ");
        }
        printf("\n");
    }
    printf("\n\n");
    return 0;

}
