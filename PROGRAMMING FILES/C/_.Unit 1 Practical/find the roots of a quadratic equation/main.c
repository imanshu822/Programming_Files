#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d,root1, root2;
    printf("Enter the coeff. of equation");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if (d>0)
    {
        printf("Roots are real and unequal");
        root1= (-b + sqrt(d))/(2*a);
        root2= (-b + sqrt(d))/(2*a);
        printf("root1 = %d and root2 =%d ",root1,root2);
    }
    if(d=0)
    printf("Roots are real and unequal");
}
