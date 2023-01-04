#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int
main()
{
    int n,i;
    char *ptr;
    printf("Enter the size of string \n");
    scanf("%d",&n);

    ptr = (char*)malloc((n+1)*sizeof(char));
    if(ptr==NULL)
    {
        printf("fail ");
        exit(0);
    }
    puts("Enter string");
    for(i=0;i<(n+1);i++)
    scanf("%c",ptr+i);
    *(ptr+i)= '\0';
    printf("entered  string %s",ptr);

    fflush(stdin);

    printf("\nEnter new size\n");
    scanf(" %d",&n);

    ptr = realloc(ptr,(n+1)*sizeof(char));

    puts("Enter new string");
    scanf("%d", &n);

    for(i=0;i<(n+1);i++)
        scanf("%c",ptr+i);
 
    *(ptr+i)= '\0';
 
 printf("New string \n%s\n",ptr);
 
 free(ptr);
 
return 0;
}

