#include <stdio.h>

int main()
{
    char ch;
    printf("���ĺ� �Է� : ");

    ch = getchar();

    // 65 <= ch <= 90
    (ch >= 'A' && ch <= 'Z') ? printf("�빮��\n") :
        (ch >= 'a' && ch <= 'z') ? printf("�ҹ���\n") :
            printf("���ĺ��� �ƴմϴ�\n");

    return 0;
}
