//  Conditional Operators

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int year;
    printf("Enter your year : ");
    scanf("%d", &year);
    if(year%4==0)
    {
        if (year%100==0)
        {
            if (year%400==0)
                printf("%d is a leap year",year);
            else
                printf("%d not is a leap year",year);
        }
        else
            printf("%d is a leap year",year);
    }
    else
        printf("%d not is a leap year",year);
    printf("\n");
    return 0;
}

