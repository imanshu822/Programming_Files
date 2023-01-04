#include <stdio.h>
#include <math.h>
int main()
{
    int n,r,i=0,new=0;
    printf("enter a number");
    scanf("%d",&n);
    while(n!=0)
    {
    r=n%10;
        if(n%10==0)
         r=5;
            new= new + ( pow(10, i)*r) ;
            i++;
            n=n/10;
       

    }
     printf("%d",new);

}

