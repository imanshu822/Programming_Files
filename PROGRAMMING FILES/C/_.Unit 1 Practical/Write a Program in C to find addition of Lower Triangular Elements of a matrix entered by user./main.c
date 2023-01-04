//
//  main.c
//  Write a Program in C to find addition of Lower Triangular Elements of a matrix entered by user.
//
//  Created by ANSHU on 02/01/22.
//

#include <stdio.h>
int main()
{   int n,sum=0;
    
    printf("Enter no of rows of a square matrix ");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
    {
        if(i>=j)
        {
        printf("Enter element a%d%d  ",i,j);
        scanf("%d",&arr[i][j]);
        }
        else
            arr[i][j]=0;
    }
    printf("\n");
    printf("Your martix is \n");
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
    {
        printf("%d ",arr[i][j]);
    }
    printf("\n");
    }
    
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            if(i>j)
                sum=sum+arr[i][j];
        }
    printf("\nSum of Elements of Lower Triangular matrix is %d\n",sum);
    return 0;
}
