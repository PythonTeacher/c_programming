#include <stdio.h>

int main()
{
    int num1, num2;

    printf("���� �ΰ� �Է� : ");
    scanf("%d%d", &num1, &num2);

   /*(num1 < num2) ?
        printf("���� �� : %d, ū �� : %d\n", num1, num2) :
        printf("���� �� : %d, ū �� : %d\n", num2, num1);

    printf("���� �� : %d, ū �� : %d\n",
           (num1 < num2) ? num1 : num2,
           (num1 < num2) ? num2 : num1);
    */

    (num1 == num2) ? printf("���� ��\n") :
        (num1 < num2) ?
            printf("���� �� : %d, ū �� : %d\n", num1, num2) :
            printf("���� �� : %d, ū �� : %d\n", num2, num1);

    return 0;
}
