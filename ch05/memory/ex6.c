#include <stdio.h>
#include <string.h>

int main()
{
    char member[5][20] = {"���ʷ�", "������", "������", "�ճ���", "�賲��"};
    char copy[5][20];
    int i;

    // �迭 ��ü ���� (memcpy �̿�)
    memcpy(copy, member, sizeof(member));

    puts("<< ������ũ ��� >>");
    for(i=0; i<5; i++)
    {
        printf("%d��° ����� => %s\n", i+1, copy[i]);
    }
    return 0;
}
