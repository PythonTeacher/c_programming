#include <stdio.h>

int main()
{
    int num;

    printf("양수를 입력하세요 : ");
    scanf("%d", &num);      // 12345

    while(1)
    {
        printf("%d", num % 10);     // 5 -> 4 -> 3 -> 2 -> 1
        num = num / 10;             // 1234 -> 123 -> 12 -> 1 -> 0

        if(num == 0) break;
    }
    return 0;
}
