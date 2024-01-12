#include <stdio.h>

int isUpper(char ch);
int isLower(char ch);
int isNumber(char ch);

int main()
{
    char ch;

    printf("문자 입력 => ");
    ch = getchar();

    if(isUpper(ch))
        printf("%c는 알파벳 대문자 이지요\n", ch);
    else if(isLower(ch))
        printf("%c는 알파벳 소문자 이지요\n", ch);
    else if(isNumber(ch))
        printf("%c는 숫자이지요\n", ch);
    else
        printf("%c는 기타문자이지요\n", ch);

    return 0;
}

int isUpper(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
        return 1;
    else
        return 0;
}

int isLower(char ch)
{
    if(ch >= 'a' && ch <= 'z')
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



