#include <stdio.h>

int main()
{
    int num1, num2;

    printf("첫번째 정수 입력 : ");
    scanf("%d", &num1);
    printf("두번째 정수 입력 : ");
    scanf("%d", &num2);

    printf("%d + %d = %d\n", num1, num2, num1 + num2);

    return 0;
}
