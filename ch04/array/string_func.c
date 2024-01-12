#include <stdio.h>

void printName(char name[]);

int main()
{
    // 문자배열은 문자열(여러개의 문자)을 저장하기 위한 배열
    char name[20];   // apple을 담기 위한 문자 배열
    // 입력한 문자열을 전체 받고자 할 경우
    // 문자열 전용 함수
    gets(name);     // 배열에 문자열을 가져옴

    //puts(name);     // 자동 개행됨
    printName(name);

    printf("The End!!");

    return 0;
}

void printName(char name[])
{
    puts(name);
}
