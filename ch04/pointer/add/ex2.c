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

    printf("����� �����Դϱ�? ����Դϱ�? ");
    gets(str);

    if(!strcmp(str, "����"))
    {
        *passengerType = 'A';

        printf("���� ����� �����Դϱ�? ����ī���Դϱ�? ");
        gets(str);

        if(strcmp(str, "����") == 0)
            *payType = 'C';
        else if(strcmp(str, "����ī��") == 0)
            *payType = 'T';
        else
        {
            printf("�߸� �Է��ϼ̽��ϴ�!!\n");
            return -1;
        }

    }
    else if(strcmp(str, "���") == 0)
    {
        *passengerType = 'C';
    }
    else
    {
        printf("�߸� �Է��ϼ̽��ϴ�!!\n");
        return -1;
    }

    return 0;
}

void calcBusFare(char passengerType, char payType, int *busFare)
{
    if(passengerType == 'A')
    {
        if(payType == 'T')
            *busFare = 1050;        // ���� ����ī�� ���
        else if(payType == 'C')
            *busFare = 1150;        // ���� ���� ���
    }
    else if(passengerType == 'C')
        *busFare = 450;             // ��� ���
}

void output(int busFare)
{
    printf("�����ؾ� �� ���� �����? %d��\n", busFare);
}
