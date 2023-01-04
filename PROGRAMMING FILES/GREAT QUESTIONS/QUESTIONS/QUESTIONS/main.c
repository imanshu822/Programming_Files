#include <stdio.h>
int main()
{
    int A[5]={122,23,555,233,400};
    int r1,i;
    int max=A[0];
    for(int i=0;i<5;i++)
    {
        if(max>A[i])
            r1=A[i];
    }
    int max2,r2;
    for(int i=0;i<5;i++)
    {
        if(max2>A[i] && r1!=A[i])
            r2=A[i];
    }
    printf("%d\n",r2);
    return 0;
}
