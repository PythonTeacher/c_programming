#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    printf("���� �Է� => ");
    ch = getchar();

    if(isalpha(ch))
        printf("%c�� ���ĺ�������\n", ch);
    else if(isdigit(ch))
        printf("%c�� ����������\n", ch);
    else
        printf("%c�� ��Ÿ����������\n", ch);

    return 0;
}
