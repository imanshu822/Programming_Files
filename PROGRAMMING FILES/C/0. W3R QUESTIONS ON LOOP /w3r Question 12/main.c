#include <stdio.h>
int main()
{
    int i,j,rows,k=0;
    printf("Enter no of rows.:\t");
    scanf("%d",&rows);
    for (i=1; i<=rows; i++) {
        for (j=1; j<=i; j++) {
            printf(" %d  ",k++);
        }
        printf("\n");
    }return 0;
}
