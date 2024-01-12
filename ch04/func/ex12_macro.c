#include <stdio.h>

#define IS_ALPHA(x)  ((x) >= 'A' && (x) <= 'Z' || \
                      (x) >= 'a' && (x) <= 'z' ? 1 : 0)
#define IS_NUMBER(x) ((x) >= '0' && (x) <= '9' ? 1 : 0)

int main()
{
    char ch;

    printf("문자 입력 => ");
    ch = getchar();

    if(IS_ALPHA(ch))
        printf("%c는 알파벳입니다\n", ch);
    else if(IS_NUMBER(ch))
        printf("%c는 숫자입니다\n", ch);
    else
        printf("%c는 기타문자입니다\n", ch);

    return 0;
}

int isAlpha(char ch)
{
    if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
        return 1;
    else
        return 0;
}

int isNumber(char ch)
{
    if(ch >= '0' && ch <= '9')
        return 1;
    else
        return 0;
}
