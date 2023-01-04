#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50],str2[50];
    int i=0;
    printf("Enter string 1 \t");
        gets(str1);
    printf("Enter string 2 \t");
    gets(str2);
    while (str1[i]==str2[i] && str1[i]!='\0')
        i++;
        if (str1[i]>str2[i])
            printf("str1 > str2\n");
        else if ( str1[i]<str2[i])
            printf("str1 < str2\n");
        else
            printf("str1 = str2\n");
    return 0;
}
