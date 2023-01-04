//  display the n terms of odd natural number and their sum .
//  Created by ANSHU on 12/11/21.
#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter a no:\t");
    scanf("%d",&n);
    printf("odd nos from %d to %d are : ",1,n);
    for(int i=1;i<=n;i+=2)
    {
        sum=sum+i;
        printf("%d\t",i);
    }
    
    printf("\nSum of all the odd nos from 1 to %d is : %d\n",n,sum);
    return 0;
}
