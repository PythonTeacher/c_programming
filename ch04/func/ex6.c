#include <stdio.h>

int isLeap(int year);

int main()
{
    int year;

    while(1)
    {
        printf("년도를 입력하세요 (종료 : 0) => ");
        scanf("%d", &year);

        if(year == 0) break;

        if(isLeap(year))
            printf("윤년입니다\n");
        else
            printf("평년입니다\n");
    }
    return 0;
}

int isLeap(int year)
{
    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        return 1;       // 윤년인 경우
    else
        return 0;       // 평년인 경우
}




