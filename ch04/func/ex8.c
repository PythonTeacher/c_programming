#include <stdio.h>

int main()
{
    int a, b;

    printf("두 개의 정수 입력 : ");
    scanf("%d %d", &a, &b);     // a:2, b:3

    printf("<< call by value >>");
    printf("[before] %d, %d\n", a, b); // 2, 3
    swap(a, b);
    printf("[after] %d, %d\n", a, b); // 2, 3

    printf("\n\n<< call by reference >>");
    printf("[before] %d, %d\n", a, b); // 2, 3
    swap1(&a, &b);      // 100, 200
    printf("[after] %d, %d\n", a, b); // 3, 2

    return 0;
}

void swap(int a, int b)
{
    int temp;
    temp = a;   // temp:2
    a = b;      // a:3
    b = temp;   // b:2
}

void swap1(int *a, int *b)
{
    int temp;
    temp = *a;   // temp:2
    *a = *b;      // a:3
    *b = temp;   // b:2
}






