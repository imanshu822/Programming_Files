#include <stdio.h>
int main()
{
    int i,j,spc,rows,k=1,row_inc;
    printf("Enter no of rows.:\n");
    scanf("%d",&rows);
    row_inc=rows;
    for (i=1; i<=rows; i++)
    {
        for (spc=1; spc<row_inc; spc++)
            printf(" ");
            row_inc--;
            for (j=1; j<=i; j++)
            {
                printf("%d ",k++);
            }
            printf("\n");
        }
        return 0;
    }

