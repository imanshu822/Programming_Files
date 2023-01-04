#include <stdio.h>
int main()
{
    int A[10][10],B[10][10],C[10][10],r1,c1,r2,c2,i,j,k;
    printf("Enter no of rows of 1st matrix : ");
    scanf("%d",&r1);
    printf("Enter no of columns of 1st matrix : ");
    scanf("%d",&c1);
    printf("Enter no of rows of 2st matrix : ");
    scanf("%d",&r2);
    printf("Enter no of columns of 2st matrix : ");
    scanf("%d",&c2);
    while(c1==r2)
    {
    if (c1!=r2)
        printf("column of matrix 1 is not equal to row of matrix 2\n ENTER AGAIN \n");
    else
    {
        printf("Enter the elements of matrix 1");
        for(i=0;i<r1;i++)
            for(j=0;j<c1;j++)
                scanf("%d",&A[i][j]);
        printf("Enter the elements of matrix 2");
        for(i=0;i<r1;i++)
            for(j=0;j<c1;j++)
                scanf("%d",&B[i][j]);
    }
        
    }
    for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
            printf("%d",A[i][j]);
    for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
            printf("%d",B[i][j]);
    
}
