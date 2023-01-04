#include <stdio.h>
int main()
{
    int x,result=0;
    printf("x^3+2*x+1\n");
    printf("Enter the value of to calculate value of polynomial: ");
    scanf("%d",&x);
    result=(x*x*x)+(2*x)+1;
    printf("Ans is : %d\n",result);
    return 0;
}
