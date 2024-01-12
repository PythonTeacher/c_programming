#include <stdio.h>

int main()
{
    int a, b, res;

    printf("두 개의 정수 입력 : ");
    scanf("%d%d", &a, &b);

    if(b != 0)
    {
        res = a / b;
        printf("%d / %d = %d\n", a, b, res);
    }
    else
        printf("0으로 나눌 수 없습니다\n");

    printf("Bye~~\n");
    return 0;
}
