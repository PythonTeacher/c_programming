#include <stdio.h>

//#define ERROR

int main()
{
    #if defined(DEBUG)
        puts("ex2. 콘솔로 출력하기111");
    #elif defined(ERROR)
        puts("ex2. 콘솔로 출력하기222");
        FILE *fp = fopen("log.txt", "w");
        fputs("ex2. 파일로 출력하기", fp);
        fclose(fp);
    #else
        puts("없는 로그레벨입니다");
    #endif // LOG_LEVEL
    return 0;
}


