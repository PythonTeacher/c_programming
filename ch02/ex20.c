#include <stdio.h>

int main()
{
    int iYouthPrice, iAdultPrice;     // �����
    int youthCnt, adultCnt;         // �ż�
    int discount, totalPrice, discountPrice, finalPrice;

    printf("< ��ȭǥ ���� >\n");
    printf("û�ҳ� ����� �Է� : ");
    scanf("%d", &youthPrice);
    printf("���� ����� �Է� : ");
    scanf("%d", &adultPrice);
    printf("û�ҳ� �ż� �Է� : ");
    scanf("%d", &youthCnt);
    printf("���� �ż� �Է� : ");
    scanf("%d", &adultCnt);
    printf("������ �Է� : ");
    scanf("%d", &adultCnt);

    // ����� ���
    totalPrice = youthPrice * youthCnt + adultPrice * adultCnt;
    discountPrice = totalPrice * discount * 0.01;
    finalPrice = totalPrice - discountPrice;
    printf("--------------------\n");
    printf("���� �� ����� ��� : ");
    printf("���ε� �ݾ� : ");
    printf("���� �� ����� ��� : ");
    return 0;
}
