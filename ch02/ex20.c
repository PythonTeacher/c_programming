#include <stdio.h>

int main()
{
    int iYouthPrice, iAdultPrice;     // 입장료
    int youthCnt, adultCnt;         // 매수
    int discount, totalPrice, discountPrice, finalPrice;

    printf("< 영화표 예매 >\n");
    printf("청소년 입장료 입력 : ");
    scanf("%d", &youthPrice);
    printf("성인 입장료 입력 : ");
    scanf("%d", &adultPrice);
    printf("청소년 매수 입력 : ");
    scanf("%d", &youthCnt);
    printf("성인 매수 입력 : ");
    scanf("%d", &adultCnt);
    printf("할인율 입력 : ");
    scanf("%d", &adultCnt);

    // 입장료 계산
    totalPrice = youthPrice * youthCnt + adultPrice * adultCnt;
    discountPrice = totalPrice * discount * 0.01;
    finalPrice = totalPrice - discountPrice;
    printf("--------------------\n");
    printf("할인 전 입장료 계산 : ");
    printf("할인된 금액 : ");
    printf("할인 후 입장료 계산 : ");
    return 0;
}
