// use of strrev

#include <stdio.h>
#include <string.h>

int main()
{
    char str[50],temp;
    int i=0,j=0;
    printf("Enter a string :");
    gets(str);
    j=strlen(str)-2;
    while(i<j)
    {
        temp=str[i];
        str[i]=str[j];
        str[i]=temp;
        i++;
        j--;
    }
    printf("Reverse of sting is %s\n",str);
    return 0;
}
