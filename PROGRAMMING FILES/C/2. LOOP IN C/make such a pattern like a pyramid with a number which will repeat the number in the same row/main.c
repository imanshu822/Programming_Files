//  make such a pattern like a pyramid with a number which will repeat the number in the same row
//  Created by ANSHU on 15/11/21.
#include <stdio.h>
int main()
{   int i,j,n,spc;
    printf("Enter a no.:\t");
    scanf ("%d",&n);
    spc =n-1;
    for(i=0;i<=n;i++)
    {
        for(spc=0;spc<=i;spc++)
        {
            for (j=1;j<=i;j++)
            printf(" * ");
           
        }
    printf("\n");
    }
   
    return 0;


}
