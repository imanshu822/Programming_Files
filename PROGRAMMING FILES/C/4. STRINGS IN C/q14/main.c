#include<stdio.h>
#include<string.h>
int main()
{
 char str1[50],str2[50],str3[50],str4[50];
int len=0,x;
    printf("enter string 1:");
    gets(str1);
    printf("enter string 2:");
    gets(str2);
    x =strlen(str1);
    printf("length of string is %d\n",x);
    strcpy(str3,str1);
    printf("copy of string1 in string 3 is ");
    puts(str3);
    printf("\n");
    strcat(str1,str2);
    printf("concatinated string of string 1 and string 2 is ");
    puts(str1);
    printf("\n");
    return 0;
  }
