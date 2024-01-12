#include <stdio.h>
#include <stdlib.h>

void validate(int);
int sum(int);

int main()
{
    int num;

    printf("양수 입력 : ");
    scanf("%d", &num);

    validate(num);      // 입력값 검증

    printf("1 ~ %d까지의 합 : %d\n", num, sum(num));

    return EXIT_SUCCESS;
}

void validate(int n)
{
    if(n <= 0)
    {
        printf("양수를 입력하세요!!!\n");
        exit(EXIT_FAILURE);        // 0:정상종료, 1:비정상종료
    }
}

int sum(int n)
{
    if(n == 1) return 1;
    else return n + sum(n-1);
}









