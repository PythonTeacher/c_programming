#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    printf("���� �Է� => ");
    ch = getchar();

    if(isupper(ch))
        printf("%c�� ���ĺ� �빮�� ������\n", ch);
    else if(islower(ch))
        printf("%c�� ���ĺ� �ҹ��� ������\n", ch);
    else if(isdigit(ch))
        printf("%c�� ����������\n", ch);
    else
        printf("%c�� ��Ÿ����������\n", ch);

    return 0;
}
