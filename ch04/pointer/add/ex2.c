#include <stdio.h>

int input(char *passengerType, char *payType);
void calcBusFare(char passengerType, char payType, int *busFare);
void output(int busFare);

int main()
{
    char passengerType;  // adult:A, child:C
    char payType;        // cash:C, transportation card:T
    int busFare;

    while(input(&passengerType, &payType) < 0);

    calcBusFare(passengerType, payType, &busFare);
    output(busFare);

    return 0;
}

int input(char *passengerType, char *payType)
{
    char str[10];

    printf("당신은 성인입니까? 어린이입니까? ");
    gets(str);

    if(!strcmp(str, "성인"))
    {
        *passengerType = 'A';

        printf("지불 방법이 현금입니까? 교통카드입니까? ");
        gets(str);

        if(strcmp(str, "현금") == 0)
            *payType = 'C';
        else if(strcmp(str, "교통카드") == 0)
            *payType = 'T';
        else
        {
            printf("잘못 입력하셨습니다!!\n");
            return -1;
        }

    }
    else if(strcmp(str, "어린이") == 0)
    {
        *passengerType = 'C';
    }
    else
    {
        printf("잘못 입력하셨습니다!!\n");
        return -1;
    }

    return 0;
}

void calcBusFare(char passengerType, char payType, int *busFare)
{
    if(passengerType == 'A')
    {
        if(payType == 'T')
            *busFare = 1050;        // 성인 교통카드 요금
        else if(payType == 'C')
            *busFare = 1150;        // 성인 현금 요금
    }
    else if(passengerType == 'C')
        *busFare = 450;             // 어린이 요금
}

void output(int busFare)
{
    printf("지불해야 할 버스 요금은? %d원\n", busFare);
}
