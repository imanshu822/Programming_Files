#include <stdio.h>
void pos (void);
void odd(int);
int sq(void);
int cub(int);
int main()
{
    int ch,n;
    printf("Enter 1 for +ve or -ve \nEnter 2 for odd or even\nEnter 3 for square\nEnter 4 for cube\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            pos();
            break;
        case 2:
            scanf("%d",&n);
            odd (n);
            break;
        case 3:
    n = sq();
            printf("%d",n);
            break;
        case 4:
            printf("Enter no");
            scanf("%d",&n);
            int c=cub(n);
            printf("%d",c);
            break;
        default:
            printf("invalid Input");
    }
    return 0;
    }
    void pos()
{
        int x;
    printf("Enter no.");
    scanf("%d",&x);
    if (x>=0)
        printf("No is positive ");
    else
        printf("No is negative");
}
   void odd (int n)
{
    if (n%2==0)
        printf("No is even");
    else
        printf("No is odd");
}
    int sq()
{
        int n;
    printf("Enter no");
    scanf("%d",&n);
    return (n*n);
}
int cub(int n)
{
    return (n*n*n);
}
