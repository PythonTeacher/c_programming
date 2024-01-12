#include <stdio.h>

int main()
{
    int num1, num2;

    printf("정수 두개 입력 : ");
    scanf("%d %d", &num1, &num2);

    printf("-----------------------\n");
    printf("첫번째 정수 = %d\n", num1);
    printf("두번째 정수 = %d\n", num2);
    printf("-----------------------\n");

    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    printf("%d / %d = %d\n", num1, num2, num1 / num2);
    printf("%d %% %d = %d\n", num1, num2, num1 % num2);

    return 0;
}
