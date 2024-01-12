#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    printf("문자 입력 => ");
    ch = getchar();

    if(isalpha(ch))
        printf("%c는 알파벳이지요\n", ch);
    else if(isdigit(ch))
        printf("%c는 숫자이지요\n", ch);
    else
        printf("%c는 기타문자이지요\n", ch);

    return 0;
}
