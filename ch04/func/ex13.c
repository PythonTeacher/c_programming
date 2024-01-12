#include <stdio.h>

int isUpper(char ch);
int isLower(char ch);
int isNumber(char ch);

int main()
{
    char ch;

    printf("���� �Է� => ");
    ch = getchar();

    if(isUpper(ch))
        printf("%c�� ���ĺ� �빮�� ������\n", ch);
    else if(isLower(ch))
        printf("%c�� ���ĺ� �ҹ��� ������\n", ch);
    else if(isNumber(ch))
        printf("%c�� ����������\n", ch);
    else
        printf("%c�� ��Ÿ����������\n", ch);

    return 0;
}

int isUpper(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
        return 1;
    else
        return 0;
}

int isLower(char ch)
{
    if(ch >= 'a' && ch <= 'z')
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



