#include <stdio.h>

void swap2(int& n1, int& n2);

int main()
{
    int num1, num2;

    printf("두 개의 정수 입력 : ");
    scanf("%d %d", &num1, &num2);

    printf("[before] %d, %d\n", num1, num2);
    swap2(num1, num2);
    printf("[after] %d, %d\n", num1, num2);

    return 0;
}

void swap(int n1, int n2)
{
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

void swap1(int* n1, int* n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void swap2(int& n1, int& n2)
{
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}
