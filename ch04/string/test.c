#include <stdio.h>

int main()
{
    char str[] = "almost every programmer should know memset!";

    memset(str,'-',6);
    puts(str);

    memset(str, 0, sizeof(str));
    puts(str);

    return 0;
}
