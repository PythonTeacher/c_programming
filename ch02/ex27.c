#include <stdio.h>

int main()
{
    char ch;
    printf("알파벳 입력 : ");

    ch = getchar();

    // 65 <= ch <= 90
    (ch >= 'A' && ch <= 'Z') ? printf("대문자\n") :
        (ch >= 'a' && ch <= 'z') ? printf("소문자\n") :
            printf("알파벳이 아닙니다\n");

    return 0;
}
