#include <stdio.h>
#include <string.h>

int main()
{
    char member[5][20] = {"���ʷ�", "������", "������", "�ճ���", "�賲��"};
    int i;

    puts("<< ������ũ ��� >>");

    for(i=0; i<5; i++)
    {
        printf("%d��° ����� => %s, ", i+1, member[i]);

        memset(member[i]+2, 'O', 2);
        //member[i][4] = '\0';
        memset(member[i]+4, ' ', 2);
        printf("�Ǹ� ����� => %s\n", member[i]);
    }

    return 0;
}
