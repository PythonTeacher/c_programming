#include <stdio.h>

void input(int *pHours);
int *calcMoney(int *pHours);

#define MIN_WAGE    5210

int main()
{
    int hours;
    int *pMoney;

    input(&hours);
    // ���� �ð� �Է�

    pMoney = calcMoney(&hours);
    printf("�� �˹ٺ� : %d��\n", *pMoney);

    return 0;
}

void input(int *pHours)
{
    printf("���� �ð��� �Է��ϼ��� => ");
    scanf("%d", pHours);
}

int *calcMoney(int *pHours)
{
    static int money;
    money = *pHours * MIN_WAGE;
    return &money;
}








