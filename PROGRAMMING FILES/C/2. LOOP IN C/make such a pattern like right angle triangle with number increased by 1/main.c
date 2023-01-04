//  make such a pattern like right angle triangle with number increased by 1
//  Created by ANSHU on 13/11/21.
#include <stdio.h>
int main()
{
    int n,k=1;
    printf("Enter a no:\t");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            printf("%d\t",k++);
        printf("\n");
        
    }
}
/Users/anshu/Desktop/PROGRAMMING FILES/C/Loop in C/display the pattern like right angle triangle using an asterisk
