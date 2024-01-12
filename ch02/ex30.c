#include <stdio.h>

int main()
{
    double total = 365.2422;    // 일기준
    int day, hour, min, sec;

    day = (int)total;       // 365일
    total = total - day;    // 0.2422
    total = total * 24;     // 5.8128

    hour = (int)total;      // 5시간
    total = total - hour;   // 0.8128
    total = total * 60;     // 48.768

    min = (int)total;       // 48분
    total = total - min;    // 0.768
    total = total * 60;     // 46.08

    sec = (int)total;       // 46초

    printf("1년은 %d일 %d시간 %d분 %d초 입니다\n", \
           day, hour, min, sec);
    return 0;
}
