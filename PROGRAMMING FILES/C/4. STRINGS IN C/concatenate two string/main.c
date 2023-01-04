
#include <stdio.h>
#include <string.h>

int main ()
{   int len1,len2;
    
    char a[100] = "computer", b[100]= "science",c[100];
    len1= strlen(a);
    len2= strlen(b);
    int i,j=0;
    for (i=0;i<len1;i++)
        c[i]=a[i];
    for(i=len1;i<len1+len2;i++)
    {
        c[i]=b[j];
        j++;
    }
    c[i]='\0';
    puts(c);
    return 0;
}

