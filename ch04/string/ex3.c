#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "���� �ٺ���!!";

    printf("������ ���ڿ� : %s\n", str);

    strncpy(str+5, "õ��", 4);

    printf("������ ���ڿ� : %s\n", str);

    return 0;
}
