#include <stdio.h>

#define IS_ALPHA(x)  ((x) >= 'A' && (x) <= 'Z' || \
                      (x) >= 'a' && (x) <= 'z' ? 1 : 0)
#define IS_NUMBER(x) ((x) >= '0' && (x) <= '9' ? 1 : 0)

int main()
{
    char ch;

    printf("���� �Է� => ");
    ch = getchar();

    if(IS_ALPHA(ch))
        printf("%c�� ���ĺ��Դϴ�\n", ch);
    else if(IS_NUMBER(ch))
        printf("%c�� �����Դϴ�\n", ch);
    else
        printf("%c�� ��Ÿ�����Դϴ�\n", ch);

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
