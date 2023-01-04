
// copy of String
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50],str2[50];
    int i;
    printf("Enter string 1 \t");
        gets(str1);
    for (i=0;str1[i]!='\0';i++)
        str2[i]=str1[i];
    str2[i]='\0';
    printf("Copied string is : %s\n",str1);
    
    return 0;
}
