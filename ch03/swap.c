#include <stdio.h>

int main()
{
    int a = 2, b = 3;

    // 1. 임시변수 만들기
    int temp;

    temp = a;       // temp : 2
    a = b;          // a : 3
    b = temp;       // b : 2

    printf("결과 => %d, %d\n", a, b);

    // 2. XOR 연산 이용하기
    a = 2, b = 3;       // a : 10, b : 11

    a = a ^ b;          // a : 01
    b = a ^ b;          // b : 10
    a = a ^ b;          // a : 11

    printf("결과 => %d, %d\n", a, b);

    return 0;
}
