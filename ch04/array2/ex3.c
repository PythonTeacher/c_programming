#include <stdio.h>

int main()
{
    char main[40+1];
    char soup[40+1];
    char side[100+1];
    char dessert[40+1];

    // ����/�ٴ뱹 ���� ��ä ����/���ٽӽ��� �����ġ ���
    puts("������ ������?");
    gets(main);

    puts("������ ����?");
    gets(soup);

    puts("������ ������?");
    gets(side);

    puts("������ ����Ʈ��?");
    gets(dessert);

    puts("");
    puts("<< ������ �޴� >>");
    puts(main);
    puts(soup);
    puts(side);
    puts(dessert);

    return 0;
}
