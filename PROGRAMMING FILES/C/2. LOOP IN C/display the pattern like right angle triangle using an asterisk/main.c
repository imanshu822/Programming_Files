//  display the pattern like right angle triangle using an asterisk
//  Created by ANSHU on 13/11/21.
#include <stdio.h>
int main()
{
   int i,j,rows;
   printf("Input number of rows : ");
   scanf("%d",&rows);
   for(i=1;i<=rows;i++)
   {
    for(j=1;j<=i;j++)
       printf("*\t");
    printf("\n");
   }
    return 0;
}
