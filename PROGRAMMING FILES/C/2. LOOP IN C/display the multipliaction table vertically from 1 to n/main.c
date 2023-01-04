//  display the multipliaction table vertically from 1 to n
//  Created by ANSHU on 12/11/21.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a no.:\t");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=10;j++)
        {
            printf("%d * %d = %d\n",i,j,i*j);
    
        }
            printf("\n");
    }
    return 0;
}
