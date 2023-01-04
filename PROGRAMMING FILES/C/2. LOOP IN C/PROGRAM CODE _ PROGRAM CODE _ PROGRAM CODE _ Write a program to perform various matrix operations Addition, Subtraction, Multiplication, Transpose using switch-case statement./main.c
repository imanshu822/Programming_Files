#include <stdio.h>
int main()
{
    int n;
    printf("Matrix Calculator\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Transpose\n");
    printf("Choose the option: ");
    scanf("%d",&n);
    int r, c, a[10][10], b[10][10], sum[10][10],sub[10][10],mul[10][10],trans[10][10], i, j,k;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns : ");
    scanf("%d", &c);

    printf("\nEnter elements of 1st matrix:\n");
        for (i = 0; i < r; ++i)
            for (j = 0; j < c; ++j)
            {
                printf("Enter element a%d%d: ", i + 1, j + 1);
                scanf("%d", &a[i][j]);
            }
    printf("Enter elements of 2nd matrix:\n");
        for (i = 0; i < r; ++i)
            for (j = 0; j < c; ++j)
            {
                printf("Enter element b%d%d: ", i + 1, j + 1);
                scanf("%d", &b[i][j]);
            }
    switch (n)
    {
        case 1:
            for (i = 0; i < r; ++i)
              for (j = 0; j < c; ++j)
              {
                sum[i][j] = a[i][j] + b[i][j];
              }
            printf("\nAddition of two matrices: \n");
                for (i = 0; i < r; ++i)
                    for (j = 0; j < c; ++j)
                    {
                        printf("%d  ", sum[i][j]);
                            if (j == c - 1)
                            printf("\n\n");
                    }
            break;
        case 2:
            for (i = 0; i < r; ++i)
              for (j = 0; j < c; ++j)
              {
                sub[i][j] = a[i][j] - b[i][j];
              }
            printf("\nSubtraction of two matrices: \n");
                for (i = 0; i < r; ++i)
                    for (j = 0; j < c; ++j)
                    {
                        printf("%d  ", sum[i][j]);
                            if (j == c - 1)
                            printf("\n\n");
                    }
            break ;
        case 3:
        {
            printf("multiply of the matrix=\n");
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    mul[i][j]=0;
                        for(k=0;k<c;k++)
                        {
                            mul[i][j]+=a[i][k]*b[k][j];
                        }
                }
            }
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    printf("%d\t",mul[i][j]);
                }
                    printf("\n");
            }
    }
            break;
        case 4:
        {
            printf("\nTranspose of martix 1st is \n");
                for (i = 0; i < r; ++i)
                    for (j = 0; j < c; ++j)
                    {
                        printf("%d  ", a[j][i]);
                            if (j == c - 1)
                            printf("\n\n");
                    }
            printf("\nTranspose of martix 2nd is \n");
                for (i = 0; i < r; ++i)
                    for (j = 0; j < c; ++j)
                    {
                        printf("%d  ", b[j][i]);
                            if (j == c - 1)
                            printf("\n\n");
                    }
        }
            break;
        default:
            printf("Invalid input");
    }
    return 0;
}
