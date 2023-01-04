//  display the pattern like right angle triangle with a number
//  Created by ANSHU on 13/11/21.
#include <stdio.h>
int main()
{
    int n;
    printf("Input no of raws:\t");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            printf("%d\t",j);
        printf("\n");
    }
    return 0;
}
