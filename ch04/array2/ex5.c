#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len;

    printf("������ �Է��ϼ��� => ");
    gets(str);

    printf("�Ųٷ� ����ϸ� => ");

    len = strlen(str);  // apple -> 5

    for(i=len-1; i>=0; i--)
    {
        putchar(str[i]);
    }

    return 0;
}
