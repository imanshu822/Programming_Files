#include <stdio.h>
#include <string.h>

int main ()
{   int len1,len2,i,flag=0;
    
    char a[100], b[100];
    printf("Enter string 1");
    gets(a);
    printf("Enter string 2");
    gets(b);
    len1= strlen(a);
    len2= strlen(b);
    if (len1!= len2)
        printf("strings are not equal\n");
    else
    {
        for(i=0;i<len1;i++)
        {
            if (a[i]!=b[i])
            {
                flag=1;
            break;
            }
        }
   
    if(flag==0)
        printf("strings are equal\n");
    else
        printf("Strings are not equal");
        
    return 0;
    }
        
}
