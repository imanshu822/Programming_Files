
//  Logical Operators
//  Created by ANSHU on 04/10/21.
#include <stdio.h>
int main()
{
    int a,b,c, result;
    printf("enter the value of a,b and c");
    scanf("%d %d %d",&a,&b, &c);
    result = (a == b) && (c > b);
    printf("(a == b) && (c > b) is %d \n", result);
    result = (a == b) && (c < b);
    printf("(a == b) && (c < b) is %d \n", result);
    result = (a == b) || (c < b);
    printf("(a == b) || (c < b) is %d \n", result);
    result = (a != b) || (c < b);
    printf("(a != b) || (c < b) is %d \n", result);
    result = !(a != b);
    printf("!(a == b) is %d \n", result);
    result = !(a == b);
    printf("!(a == b) is %d \n", result);
    
    return 0;

}
