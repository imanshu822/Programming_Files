#include <stdio.h>
int main()
{
    int i,j;
    int A[2][2],B[2][2],C[2][2],D[2][2];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            scanf("%d",&A[i][j]);
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            scanf("%d",&B[i][j]);
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
           C[i][j]=A[i][j]+B[i][j];
          D[i][j]=A[i][j]-B[i][j];
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        
            
         printf("%d ",C[i][j]);
        printf(" \n");
        
    }
   
}
