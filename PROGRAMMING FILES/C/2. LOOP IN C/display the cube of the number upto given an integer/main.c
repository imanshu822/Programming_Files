//  display the cube of the number upto given an integer
#include <stdio.h>
int main()
{
    int n,cube=0,t;
    printf("Enter How many qubic nos you want to print:\t");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        printf("number %d :\t",i);
        scanf("%d",&t);
        cube=cube + t*t*t;
    }
    printf("%d\n",cube);
    return 0;
}
