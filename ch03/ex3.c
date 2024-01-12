#include <stdio.h>

int main()
{
    int num;

    printf("정수 입력 : ");
    scanf("%d", &num);

   // if(num % 2 == 0)
    if(!(num % 2))
    {
        printf("%d는 짝수 입니다\n", num);
    }
    else
    {
        printf("%d는 홀수 입니다\n", num);
    }
    return 0;
}
