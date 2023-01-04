#include <stdio.h>
int main()
{
    float x,sum,no_row;
    int i,n;
    printf("Input the value of x :");
    scanf("%f",&x);
    printf("Input number of terms : ");
    scanf("%d",&n);
    sum =1; no_row = 1;
    for (i=1;i<n;i++)
    {
      no_row = no_row*x/(float)i;
      sum =sum+ no_row;
    }
    printf("\nValue of e^x is till %d term is : %f\n",n,sum);
    return 0;
}
