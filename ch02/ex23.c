#include <stdio.h>

int main()
{
    int num;

    printf("���� �Է� : ");
    scanf("%d", &num);

    (num % 2 == 0) ? printf("%d�� ¦���Դϴ�\n", num) :
                     printf("%d�� Ȧ���Դϴ�\n", num);

    printf("%d�� %s �Դϴ�\n", num,
            (num % 2 == 0) ? "¦��" : "Ȧ��");

    return 0;
}

