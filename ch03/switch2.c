#include <stdio.h>

// switch.c
int main()
{
    char op;
    int op1, op2, result;
    char flag = 1;

    printf("두 개의 정수와 연산자 입력 (ex:2 + 3) => ");
    scanf("%d %c %d", &op1, &op, &op2);

    switch(op)
    {
    case '+': result = op1 + op2; break;
    case '-': result = op1 - op2; break;
    case '*': result = op1 * op2; break;
    case '/':
        if(op2 == 0) {
            printf("0으로 나눌 수 없습니다\n");
        } else {
            result = op1 / op2;
        }
        break;
    default:
        printf("잘못된 연산자입니다\n");
        flag = 0;
    }

    if(flag)
        printf("%d %c %d = %d\n", op1, op, op2, result);

    return 0;
}
