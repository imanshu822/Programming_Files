#include <stdio.h>
int main()
{
    int loc=0,A[]={1,3,52,55,5,8,9,0,8};
    int min=0;
    for(int i=0;i<=8;i++)
    {
        if (A[i]>min)
        {
            min=A[i];
            loc=i;
        }
    }
    printf("max of the array is%d\n",min);
    printf("location of maximum no is %d\n",loc);
    return 0;
}
