// Addition, Subraction, Multiplication, and Division of 2 nos.
// Created by ANSHU on 02/10/21.

#include <stdio.h>
int main()
{
    int a,b,sum,sub,product,division,modulas;
    printf("Enter two nos: ");
    scanf("%d %d",&a,&b);
    sum = a+b;
    sub = a-b;
    product = a*b;
    division = a/b;
    modulas = a%b;
    printf("Sum of a and b is : %d \n" ,sum);
    printf("Sub of a and b is : %d \n" ,sub);
    printf("Product of a and b is : %d \n" ,product);
    printf("Division of a and b is : %d \n" ,division);
    printf("Modulas of and b is : %d \n", modulas);
    
    return 0;
    
}
