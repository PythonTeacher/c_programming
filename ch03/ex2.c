#include <stdio.h>

int main()
{
    int a, b, res;

    printf("�� ���� ���� �Է� : ");
    scanf("%d%d", &a, &b);

    if(b != 0)
    {
        res = a / b;
        printf("%d / %d = %d\n", a, b, res);
    }
    else
        printf("0���� ���� �� �����ϴ�\n");

    printf("Bye~~\n");
    return 0;
}
