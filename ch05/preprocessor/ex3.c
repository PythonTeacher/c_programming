#include <stdio.h>

//#define ERROR

int main()
{
    #ifdef DEBUG
        puts("ex3. 콘솔로 출력하기111");
    #elif defined(ERROR)
        puts("ex3. 콘솔로 출력하기222");
        FILE *fp = fopen("log.txt", "w");
        fputs("ex3. 파일로 출력하기", fp);
        fclose(fp);
    #else
        puts("없는 로그레벨입니다");
    #endif // LOG_LEVEL

    printf("[%d] 일자 : %s, 시간 : %s, 파일명 : %s, 함수명 : %s\n",
           __LINE__, __DATE__, __TIME__, __FILE__ , __func__ );

    return 0;
}


