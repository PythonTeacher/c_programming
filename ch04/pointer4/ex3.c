#include <stdio.h>

void swap(char **ppa, char **ppb);

int main()
{
    char *pa = "World";
    char *pb = "Hello";

    puts("<< swap �� >>");
    printf("%s %s\n", pa, pb);

    swap(&pa, &pb);     // �����ͺ����� ������(����������)

    puts("\n<< swap �� >>");
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
