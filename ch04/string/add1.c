#include <stdio.h>
#include <string.h>

int main()
{
    char url[] = "http://www.naver.com";
    char *p;

    p = strrchr(str, '/');
    puts(p+1);

    strtok(str, "//");
    puts(strtok(NULL, "//"));

    return 0;
}
