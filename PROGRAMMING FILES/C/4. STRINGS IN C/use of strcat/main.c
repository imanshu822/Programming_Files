// use of strcat

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50],str2[50];
    int i=0,len=0;
    printf("Enter string 1 \t");
        gets(str1);
    printf("Enter string 2 \t");
    gets(str2);
    for (i=0;str1[i]!='\0';i++)
        len++;
    for (i=0;str2[i]!='\0';i++)
        str1[len+i]=str2[i];
    str1[len+i]='\0';
    printf("concatenated string is : %s\n",str1);
    return 0;
}
