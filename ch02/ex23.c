#include <stdio.h>

int main()
{
    int num;

    printf("정수 입력 : ");
    scanf("%d", &num);

    (num % 2 == 0) ? printf("%d는 짝수입니다\n", num) :
                     printf("%d는 홀수입니다\n", num);

    printf("%d는 %s 입니다\n", num,
            (num % 2 == 0) ? "짝수" : "홀수");

    return 0;
}

