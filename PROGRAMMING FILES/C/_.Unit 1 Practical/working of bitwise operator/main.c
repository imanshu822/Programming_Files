#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter value of a and b");
    scanf("%d%d",&a,&b);
    printf("Value of a&b is : %d\n",a&b);
    printf("Value of a|b is : %d\n",a|b);
    printf("Value of a^b is : %d\n",a^b);
    printf("Value of a!=b is : %d\n",a!=b);
    printf("Value of a>>2 is : %d\n",a>>2);
    printf("Value of a<<2 is : %d\n",a<<2);
    return 0;
    
}
