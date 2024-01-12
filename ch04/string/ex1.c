#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len;
    char *p = str;

    printf("문자열 입력 => ");
    gets(str);

    len = strlen(str);

    for(i=0; i<len; i++)
    {
        puts(str+i);
    }

    puts("");
    i=0;

    while(p[i])     // while(p[i] != '\0')
    {
        puts(p+i);
        i++;
    }

    puts("");

    while(*p)       // while(*p != '\0')
    {
        puts(p++);
    }


}
