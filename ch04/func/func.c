#include <stdio.h>

// 함수 정의하기
void getMax(int a, int b)        // 매개변수 선언
{
    int max;
    max = (a > b) ? a : b;
    printf("정수1 : %d, 정수2: %d -> 큰값: %d\n", a, b, max);

    //return;
}

int main()
{
    int a = 10, b = 20;
    getMax(a, b);           // 전달 인자

    a = 5, b = 3;
    getMax(a, b);           // 전달 인자

    a = 100, b = 200;
    getMax(a, b);           // 전달 인자

    return 0;
}
