#include <stdio.h>

int main()
{
    int num1, num2;

    printf("���� �ΰ� �Է� : ");
    scanf("%d %d", &num1, &num2);

    printf("-----------------------\n");
    printf("ù��° ���� = %d\n", num1);
    printf("�ι�° ���� = %d\n", num2);
    printf("-----------------------\n");

    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    printf("%d / %d = %d\n", num1, num2, num1 / num2);
    printf("%d %% %d = %d\n", num1, num2, num1 % num2);

    return 0;
}
