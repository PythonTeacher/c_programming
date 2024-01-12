#include <stdio.h>

int isAlpha(char ch);
int isNumber(char ch);

int main()
{
    char ch;

    printf("문자 입력 => ");
    ch = getchar();

    if(isAlpha(ch))
        printf("%c는 알파벳이지요\n", ch);
    else if(isNumber(ch))
        printf("%c는 숫자이지요\n", ch);
    else
        printf("%c는 기타문자이지요\n", ch);

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



