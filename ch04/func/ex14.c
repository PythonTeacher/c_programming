#include <stdio.h>

int power(int a, int b);

int main()
{
    int a, b;

    printf("정수 두 개 입력 : ");
    scanf("%d %d", &a, &b);     // a:2, b:3

    printf("%d ^ %d = %d\n", a, b, power(a, b));
    printf("%d ^ %d = %d\n", a, b, power1(a, b));

    return 0;
}

int power(int a, int b)
{
    int i, result=1;

    for(i=1; i<=b; i++)
    {
        result *= a;        // result = result * a;
        // 1*2=2 -> 2*2=4 -> 4*2=8
    }

    return result;
}

// 재귀함수 이용
int power1(int a, int b)
{
    if(b == 1) return a;
    else return a * power1(a, b-1);
}






