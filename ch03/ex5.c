#include <stdio.h>

int main()
{
    char ch;

    printf("�� ���ڸ� �Է��ϼ��� : ");
    ch = getchar();

    if(ch >= 'A' && ch <= 'Z')
        printf("�빮��\n");
    else if(ch >= 'a' && ch <= 'z')
        printf("�ҹ���\n");
    else if(ch >= '0' && ch <= '9')
        printf("����\n");
    else
        printf("��Ÿ����\n");


    return 0;
}
