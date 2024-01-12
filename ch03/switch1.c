#include <stdio.h>

// switch.c
int main()
{
    char level;
    printf("직급 레벨을 입력하세요(사장:1, 과장:2, 대리:3, 사원:4) => ");
    scanf("%c", &level);

    switch(level)
    {
    case '1': printf("기밀문서1, ");
    case '2': printf("기밀문서2, ");
    case '3': printf("기밀문서3, ");
    case '4': printf("일반문서 열람이 가능합니다\n");  break;
    default: printf("없는 직급입니다\n");
    }

    return 0;
}
