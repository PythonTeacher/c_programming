#include <stdio.h>

int isLeap(int year);

int main()
{
    int year;

    while(1)
    {
        printf("�⵵�� �Է��ϼ��� (���� : 0) => ");
        scanf("%d", &year);

        if(year == 0) break;

        if(isLeap(year))
            printf("�����Դϴ�\n");
        else
            printf("����Դϴ�\n");
    }
    return 0;
}

int isLeap(int year)
{
    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        return 1;       // ������ ���
    else
        return 0;       // ����� ���
}




