#include <stdio.h>
int main()
{
    int rows,i,j,spc;
    printf("Enter no of rows:\t");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(spc=rows;spc>0;spc--)
            printf(" ");
        for(j=1;j<=i;j++)
            printf(" *");
        spc--;
        printf("\n");
    }
 
    return 0;
}
