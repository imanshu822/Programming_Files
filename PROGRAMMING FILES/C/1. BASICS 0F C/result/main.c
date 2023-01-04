//  result
//  Created by ANSHU on 11/10/21.

#include <stdio.h>
int main()
{
    int m1,m2,m3,m4,avg;
    printf("Enter the marks m1,m2,m3,n4: \n");
    scanf("%d%d%d%d",&m1,&m2,&m3,&m4);
    avg=(m1+m2+m3+m4)/4;

    printf("Your total marks percent is :%d\n",avg);
    if (avg>=90)
        printf("A grade\n");
    else if (avg<=89 && avg>=80)
        printf("B grade\n");
    return 0;
}
