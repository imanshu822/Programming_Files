//  15. Find the  roots and their nature of a quadratic  equation
//  Created by ANSHU on 07/10/21.

#include <stdio.h>
#include <math.h>

int main()
    {
        int a,b,c,d;
        printf("Enter the a,b,c of the equation : ");
        scanf("%d%d%d",&a,&b,&c);
        d= b*b-4*a*c;
        if (d==0)
        {
            printf("roots are real and equal\n");
            printf("%d\n",-b/(2*a));
        }
            else if (d>0)
            {
                printf(" roots are real and unequa \n");
                printf("%.2f and %.2f\n",-b+sqrt(d)/(2*a),-b-sqrt(d)/(2*a));
               
            }
            else
            printf("roots are imagenery\n");
        
        return 0;
    }
