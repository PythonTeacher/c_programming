#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i, count;

    if(argc < 3)
    {
        puts("프로그램 사용법 오류입니다.");
        puts("사용법 : 실행파일명 문자열 반복횟수");
        return 1;
    }

    count = atoi(argv[2]);      // "3" -> 3

    for(i=0; i<count; i++)
        puts(argv[1]);

    return 0;
}
