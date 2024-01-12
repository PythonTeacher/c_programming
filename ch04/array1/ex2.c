#include <stdio.h>

int main()
{
    int intArr[10];
    double doubleArr[10];
    char charArr[10];

    printf("<< 할당된 메모리 크기 >>\n");

    printf("int형 배열 : %d bytes\n", sizeof(intArr));
    printf("double형 배열 : %d bytes\n", sizeof(doubleArr));
    printf("char형 배열 : %d bytes\n", sizeof(charArr));

    printf("int형 : %d bytes\n", sizeof(intArr[0]));
    printf("double형 : %d bytes\n", sizeof(doubleArr[0]));
    printf("char형 : %d bytes\n", sizeof(charArr[0]));

    return 0;
}
