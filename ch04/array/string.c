#include <stdio.h>

int main()
{
    // 문자배열은 문자열(여러개의 문자)을 저장하기 위한 배열
    char name[5];   // apple을 담기 위한 문자 배열
    name[0] = 'a', name[1] = 'p', name[2] = 'p', name[3] = 'l', name[4] = 'e';
    //name[5] = '\0';

    printf("%s", name);     // 어디까지가 문자열인지 알 수 없음

    // 초기화를 쉽게 하자
    //char name[6] = "apple"; // 항상 문자배열 선언시에는 널문자를 고려해서 크기 잡기

    //printf("%s", name);

    // 문자열 입력
    scanf("%s", name);  // 배열명이 배열의 시작주소이므로 &를 붙이지 않음
                        // 입력받을 배열의 크기가 충분해야 함
                        // 배열의 크기가 작다면 할당받지 않은 공간을 침범하게 됨
                        // 반드시 널문자까지 고려한 크기의 배열 선언
                        // scanf는 공백문자가 있는 경우 공백문자를 기준으로 가져옴 (hong gil dong)

    printf("%s", name);

    // 입력한 문자열을 전체 받고자 할 경우
    // 문자열 전용 함수
    //gets(name);     // 배열에 문자열을 가져옴

    //puts(name);     // 자동 개행됨

    printf("The End!!");

    return 0;
}
