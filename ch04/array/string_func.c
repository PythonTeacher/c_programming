#include <stdio.h>

void printName(char name[]);

int main()
{
    // ���ڹ迭�� ���ڿ�(�������� ����)�� �����ϱ� ���� �迭
    char name[20];   // apple�� ��� ���� ���� �迭
    // �Է��� ���ڿ��� ��ü �ް��� �� ���
    // ���ڿ� ���� �Լ�
    gets(name);     // �迭�� ���ڿ��� ������

    //puts(name);     // �ڵ� �����
    printName(name);

    printf("The End!!");

    return 0;
}

void printName(char name[])
{
    puts(name);
}
