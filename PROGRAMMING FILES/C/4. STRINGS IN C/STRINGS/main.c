#include <stdio.h>
int main()
{
    int a[10],*ptr1,*ptr2,temp;
    printf("Enter elements ");
    for(int i=0;i<10;i++)
        scanf("%d",&a[i]);
    ptr1=a;
    ptr2=&a[9];
for(int i=0;i<5;i++)
    {
        temp=*(ptr1+i);
        *(ptr1+i)=*(ptr2-i);
        *(ptr2-i)=temp;
    }
    printf("Array in reverse order and their address \n");
for(int i=0;i<10;i++)
    {
        printf("%d address-->%x\n",a[i],&a[i]);
    }
    printf("\n");
    return 0;
}
