#include <stdio.h>

int main()
{
    int year, month, day;

    printf("년 : ");
    scanf("%d", &year);
    printf("월 : ");
    scanf("%d", &month);
    printf("일 : ");
    scanf("%d", &day);

    printf("오늘의 날짜는 %d년 %d월 %d일 입니다\n", year, month, day);
    return 0;
}
