#include <stdio.h>

int main()
{
    char *pa = "World";
    char *pb = "Hello";
    char *temp;

    puts("<< swap Àü >>");
    printf("%s %s\n", pa, pb);

    temp = pa;
    pa = pb;
    pb = temp;

    puts("\n<< swap ÈÄ >>");
    printf("%s %s\n", pa, pb);

    return 0;
}
