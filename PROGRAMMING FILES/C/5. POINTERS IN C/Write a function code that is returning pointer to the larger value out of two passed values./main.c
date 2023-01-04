#include <stdio.h>
int* fun(int*, int*);
int main()
{
    int a,b;
    int *result;
    printf("Enter 1st no. ");
    scanf("%d",&a);
    printf("Enter 2nd no. ");
    scanf("%d",&b);
    result=fun(&a, &b);
    printf("%d is larger \n",*result);
    return 0;
}
int* fun(int *x, int *y)
{
 if(*x < *y)
  return y;
 else
  return x;
}
