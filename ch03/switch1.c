#include <stdio.h>

// switch.c
int main()
{
    char level;
    printf("���� ������ �Է��ϼ���(����:1, ����:2, �븮:3, ���:4) => ");
    scanf("%c", &level);

    switch(level)
    {
    case '1': printf("��й���1, ");
    case '2': printf("��й���2, ");
    case '3': printf("��й���3, ");
    case '4': printf("�Ϲݹ��� ������ �����մϴ�\n");  break;
    default: printf("���� �����Դϴ�\n");
    }

    return 0;
}
