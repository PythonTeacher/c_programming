#include <stdio.h>
#include <string.h>

int main()
{
    char ori[100];
    char copy[100];
    int i, len;

    printf("���ڿ��� �Է��ϼ��� => ");
    gets(ori);

    // ù��° ���
    for(i=0; ori[i] != '\0'; i++)
    {
        copy[i] = ori[i];
    }
    copy[i] = '\0';

    len = strlen(ori);

    // �ι�° ���
    for(i=0; i<=len; i++)
    {
        copy[i] = ori[i];
    }

    printf("����� ���ڿ� ��� => ");
    puts(copy);

    return 0;
}
