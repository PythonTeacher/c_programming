#include <stdio.h>

int power(int a, int b);
int power1(int a, int b);

int main()
{
    int a, b;

    printf("정수 두 개 입력 : ");
    scanf("%d %d", &a, &b);

    printf("%d ^ %d = %d\n", a, b, power(a, b));
    printf("%d ^ %d = %d\n", a, b, power1(a, b));

    return 0;
}

int power(int a, int b)
{
    int i, result=1;

    for(i=0; i<b; i++)
    {
        result *= a;    // result = result * a;
    }

    return result;
}

int power1(int a, int b)
{
    if(b == 1) return a;
    else return a * power1(a, b-1);
}



