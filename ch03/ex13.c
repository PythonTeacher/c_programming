#include <stdio.h>

int main()
{
    int num;
    int i=1;        // �ε��� ����
    int sum=0;      // ���� ����

    printf("���� �Է� : ");
    scanf("%d", &num);

    while(i <= num)
    {
        sum = sum + i;  // sum += i;
        i++;
    }

    printf("\n1���� %d������ �� : %d\n", num, sum);

    return 0;
}
