#include <stdio.h>

// switch.c
int main()
{
    char op;
    int op1, op2, result;
    char flag = 1;

    printf("�� ���� ������ ������ �Է� (ex:2 + 3) => ");
    scanf("%d %c %d", &op1, &op, &op2);

    switch(op)
    {
    case '+': result = op1 + op2; break;
    case '-': result = op1 - op2; break;
    case '*': result = op1 * op2; break;
    case '/':
        if(op2 == 0) {
            printf("0���� ���� �� �����ϴ�\n");
        } else {
            result = op1 / op2;
        }
        break;
    default:
        printf("�߸��� �������Դϴ�\n");
        flag = 0;
    }

    if(flag)
        printf("%d %c %d = %d\n", op1, op, op2, result);

    return 0;
}
