#include <stdio.h>
void add(int,int);
int main()
{
    int a=5,b=10;
    add(a,b);
    return 0;
}
void add (int x,int y)
{
    printf("Sum =%d",x+y);
}
