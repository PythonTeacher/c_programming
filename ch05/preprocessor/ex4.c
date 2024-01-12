#include <stdio.h>
#include <time.h>

int main()
{
    int i;
    time_t now;
    struct tm t;
    char buff[100];

    printf("오늘 날짜 : %s, 파일명 : %s\n", __DATE__, __FILE__);

    printf("[%d라인] 반복문 시작 : %s\n", __LINE__, __TIME__);

    for(i=0; i>=0; i++);

    time(&now);             // 세계 표준시간 변환

    t = *localtime(&now);    // UTC를 국가 시간으로 변환

    sprintf(buff, "%d/%02d/%02d %02d:%02d:%02d",
            t.tm_year+1900, t.tm_mon+1, t.tm_mday,
            t.tm_hour, t.tm_min, t.tm_sec);

    printf("[%d라인] 반복문 끝 : %s\n", __LINE__, buff);

    return 0;
}
