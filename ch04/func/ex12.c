#include <stdio.h>

int isAlpha(char ch);
int isNumber(char ch);

int main()
{
    char ch;

    printf("���� �Է� => ");
    ch = getchar();

    if(isAlpha(ch))
        printf("%c�� ���ĺ�������\n", ch);
    else if(isNumber(ch))
        printf("%c�� ����������\n", ch);
    else
        printf("%c�� ��Ÿ����������\n", ch);

    return 0;
}

int isAlpha(char ch)
{
    if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
        return 1;
    else
        return 0;
}

int isNumber(char ch)
{
    if(ch >= '0' && ch <= '9')
        return 1;
    else
        return 0;
}



