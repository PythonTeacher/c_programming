#include <stdio.h>

int main()
{
    int grade, price;

    printf("�г��� �Է��ϼ��� : ");
    scanf("%d", &grade);

    printf("-------------------\n");

    switch(grade)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        printf("�޽ĺ� : %d��\n", grade *1000);
        break;
    default:
        printf("���� �г�\n");
    }
    return 0;
}
