#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    printf("문자 입력 => ");
    ch = getchar();

    if(isupper(ch))
        printf("%c는 알파벳 대문자 이지요\n", ch);
    else if(islower(ch))
        printf("%c는 알파벳 소문자 이지요\n", ch);
    else if(isdigit(ch))
        printf("%c는 숫자이지요\n", ch);
    else
        printf("%c는 기타문자이지요\n", ch);

    return 0;
}
