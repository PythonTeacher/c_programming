#include <stdio.h>
#include <stdlib.h>

void validate(int);
int sum(int);

int main()
{
    int num;

    printf("��� �Է� : ");
    scanf("%d", &num);

    validate(num);      // �Է°� ����

    printf("1 ~ %d������ �� : %d\n", num, sum(num));

    return EXIT_SUCCESS;
}

void validate(int n)
{
    if(n <= 0)
    {
        printf("����� �Է��ϼ���!!!\n");
        exit(EXIT_FAILURE);        // 0:��������, 1:����������
    }
}

int sum(int n)
{
    if(n == 1) return 1;
    else return n + sum(n-1);
}









