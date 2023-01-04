#include <stdio.h>
void swap(int*,int*);
int main()
{
    int a=5,b=10;
    printf("Before swap \n");
    printf("a=%d, b=%d\n",a,b);
    swap(&a,&b);
    printf("After swap \n");
    printf("a=%d, b=%d\n",a,b);
    return 0;
}
void swap(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
