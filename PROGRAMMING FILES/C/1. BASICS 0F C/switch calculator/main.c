#include <stdio.h>
int main()
{
    printf("Options\n");
    printf(" 1. add\n 2. sub\n 3. Multiply\n 4. division\n");
    int option;
    printf("Choose your choice : ");
    scanf("%d",&option);
    int a,b,c;
    printf("enter 2 nos. : ");
    scanf("%d%d",&a,&b);
    switch(option)
    {
        case 1: c=a+b;
            break;
        case 2: c=a-b;
            break;
        case 3: c=a*b;
            break;
        case 4: c=a/b;
            break;
    }
    printf("your ans is %d\n",c);
    return 0;
}


