#include <stdio.h>

int main()
{
    int num;

    printf("숫자 입력 : ");
    scanf("%d", &num);

    if(10 < num && num < 20)
    {
        printf("%d은 10보다 크고 20보다 작습니다\n", num);
    }

    printf("Bye~~");
    return 0;
}
