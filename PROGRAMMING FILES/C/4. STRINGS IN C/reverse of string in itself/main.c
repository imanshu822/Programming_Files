#include <stdio.h>
#include <string.h>

int main ()
{
    int i ,len,x;
    char a[100] = "computer";
    len = strlen(a);
    int k=len;
    for (i=0;i<len;i++)
    {
        x= a[i];
        a[i]=a[len-1];
        a[len-1]=x;
        len--;
    }
    a[k]='\0';
    
}
