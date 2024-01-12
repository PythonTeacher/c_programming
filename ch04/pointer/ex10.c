#include <stdio.h>

void input(int *pa, int *pb, char *pc);
void add(int *pa, int *pb, int *pr);
void sub(int *pa, int *pb, int *pr);
void mul(int *pa, int *pb, int *pr);
void div(int *pa, int *pb, int *pr);

int main()
{
    int num1, num2, result;
    char op;

    input(&num1, &num2, &op);
    // 수식 입력 끝

    switch(op)
    {
    case '+':
        add(&num1, &num2, &result);
    case '-':
        sub(&num1, &num2, &result);
    case '*':
        mul(&num1, &num2, &result);
    case '/':
        div(&num1, &num2, &result);
    }

    printf("%d %c %d = %d\n", num1, op, num2, result);

    return 0;
}

void input(int *pa, int *pb, char *pc)
{
    printf("수식을 입력하시오 => ");
    scanf("%d %c %d", pa, pc, pb);
}

void add(int *pa, int *pb, int *pr)
{
    *pr = *pa + *pb;
}

void sub(int *pa, int *pb, int *pr)
{
   *pr = *pa - *pb;
}

void mul(int *pa, int *pb, int *pr)
{
    *pr = *pa * *pb;
}

void div(int *pa, int *pb, int *pr)
{
    *pr = *pa / *pb;
}
