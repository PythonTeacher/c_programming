#include <stdio.h>
#include <string.h>

#define BUF_SIZE 100

int main()
{
    char addr[BUF_SIZE];
    char school[BUF_SIZE];
    char info[BUF_SIZE];
    int len;

    puts("<< ���� ������? >>");

    snprintf(addr, BUF_SIZE, "��� �� : [%d-%d] %s�� %s�� %s�� %s����",
             425, 840, "�Ȼ�", "�ܿ�", "��", "27-1");

    puts(addr);

    snprintf(school, BUF_SIZE, "�б��� : %s, �й� : %d, �̸� : %s",
             "��̰�", 1401, "���μ�");

    puts(school);

    // �迭 �ϳ��� ��ġ��
    // ���ڿ��� ���̰� ���ϵ�
    len = snprintf(info, BUF_SIZE, "��� �� : [%d-%d] %s�� %s�� %s�� %s����",
                   425, 840, "�Ȼ�", "�ܿ�", "��", "27-1");

    snprintf(info+len, BUF_SIZE, "\n�б��� : %s, �й� : %d, �̸� : %s",
             "��̰�", 1401, "���μ�");

    puts(info);





    return 0;
}
