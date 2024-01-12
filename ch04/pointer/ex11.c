#include <stdio.h>

void input(int *pHours);
int *calcMoney(int *pHours);

#define MIN_WAGE    5210

int main()
{
    int hours;
    int *pMoney;

    input(&hours);
    // 일한 시간 입력

    pMoney = calcMoney(&hours);
    printf("총 알바비 : %d원\n", *pMoney);

    return 0;
}

void input(int *pHours)
{
    printf("일한 시간을 입력하세요 => ");
    scanf("%d", pHours);
}

int *calcMoney(int *pHours)
{
    static int money;
    money = *pHours * MIN_WAGE;
    return &money;
}








