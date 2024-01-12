#include <stdio.h>

#define LOG_LEVEL   2

int main()
{
    #if LOG_LEVEL == 1
        puts("ex1. 콘솔로 출력하기111");
    #elif LOG_LEVEL == 2
        puts("ex1. 콘솔로 출력하기222");
        FILE *fp = fopen("log.txt", "w");
        fputs("ex1. 파일로 출력하기", fp);
        fclose(fp);
    #else
        puts("없는 로그레벨입니다");
    #endif // LOG_LEVEL
    return 0;
}


