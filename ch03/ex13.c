#include <stdio.h>

int main()
{
    int num;
    int i=1;        // 인덱스 변수
    int sum=0;      // 누적 변수

    printf("정수 입력 : ");
    scanf("%d", &num);

    while(i <= num)
    {
        sum = sum + i;  // sum += i;
        i++;
    }

    printf("\n1부터 %d까지의 합 : %d\n", num, sum);

    return 0;
}
