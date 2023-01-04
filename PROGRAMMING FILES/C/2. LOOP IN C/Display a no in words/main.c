#include <stdio.h>
int main()
{
    int n,r,rev=0,p=0;
    printf("Enter a no \t");
    scanf("%d",&n);
    while (n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    while (rev>0)
    {
        p=rev%10;
        rev=rev/10;
        switch (p)
        {   case 0:
                printf("One");
                break;
            case 1:
                printf("One");
                break;
            case 2:
                printf("Two");
                break;
            case 3:
                printf("Three");
                break;
            case 4:
                printf("Four");
                break;
            case 5:
                printf("Five");
                break;
            case 6:
                printf("Six");
                break;
            case 7:
                printf("Seven");
                break;
            case 8:
                printf("Eight");
                break;
            case 9:
                printf("Nine");
                break;
            default :
                printf("None");
        }
    }
    printf("\n");
    return 0;
}
