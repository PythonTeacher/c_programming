#include <stdio.h>

int main()
{
    char ch;

    printf("한 문자를 입력하세요 : ");
    ch = getchar();

    if(ch >= 'A' && ch <= 'Z')
        printf("대문자\n");
    else if(ch >= 'a' && ch <= 'z')
        printf("소문자\n");
    else if(ch >= '0' && ch <= '9')
        printf("숫자\n");
    else
        printf("기타문자\n");


    return 0;
}
