#include <stdio.h>

void swap(char **ppa, char **ppb);

int main()
{
    char *pa = "World";
    char *pb = "Hello";

    puts("<< swap 전 >>");
    printf("%s %s\n", pa, pb);

    swap(&pa, &pb);     // 포인터변수의 포인터(이중포인터)

    puts("\n<< swap 후 >>");
    printf("%s %s\n", pa, pb);

    return 0;
}

void swap(char **ppa, char **ppb)
{
    char *temp;

    temp = *ppa;
    *ppa = *ppb;
    *ppb = temp;
}
