#include <stdio.h>

int main()
{
    int num1, num2;

    printf("���� �ΰ� �Է� : ");
    scanf("%d%d", &num1, &num2);

    if(num1 > num2)
        printf("���� �� : %d, ū �� : %d\n", num2, num1);
    else if(num1 < num2)
        printf("���� �� : %d, ū �� : %d\n", num1, num2);
    else
        printf("���� ��\n");

    //else if(num1 == num2)
    //    printf("���� ��\n");


    return 0;
}
