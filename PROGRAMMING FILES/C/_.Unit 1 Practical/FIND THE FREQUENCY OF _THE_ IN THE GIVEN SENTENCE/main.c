#include <stdio.h>
int main()

{
    int count = 0, j, times = 0, t, h, e, space;
    char string[88];
    puts("Enter a string:");
    gets(string);
    while (string[count] != '\0')
    {
        count++;
    }
    for (j = 0; j <= count - 3; j++)
    {
        t =(string[j] == 't' || string[j] == 'T');
        h =(string[j+1] == 'h' || string[j+1] == 'H');
        e =(string[j+2] == 'e'|| string[j+2] == 'E');
        space =(string[j + 3] == ' ' || string[j+3] == '\0');
        if ((t && h && e && space) == 1)
            times++;
    }
        printf("Frequency of the word 'the' is %d\n", times);
    return 0;
    }
