#include <stdio.h>
#include <string.h>

int main()
{
    int i=0 ,len=0,k=0,j=0;
    char a[100] = "computer",b[100];
    for (i=0; a[i]!='\0';i++)
        len++;
    for (j=len-1; j>=0; j--)
    {
        b[k]=a[j];
        k++;
    }
    b[k]='\0';
    puts(b);
}
