#include <stdio.h>

int main()
{
    int intArr[10];
    double doubleArr[10];
    char charArr[10];

    printf("<< �Ҵ�� �޸� ũ�� >>\n");

    printf("int�� �迭 : %d bytes\n", sizeof(intArr));
    printf("double�� �迭 : %d bytes\n", sizeof(doubleArr));
    printf("char�� �迭 : %d bytes\n", sizeof(charArr));

    printf("int�� : %d bytes\n", sizeof(intArr[0]));
    printf("double�� : %d bytes\n", sizeof(doubleArr[0]));
    printf("char�� : %d bytes\n", sizeof(charArr[0]));

    return 0;
}
