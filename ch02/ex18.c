#include <stdio.h>

int main()
{
    char bloodType;
    int age;
    float height;
    double weight;

    printf("< �Ż����� �Է� >\n");
    printf("1. ������ �Է� : ");
    scanf("%c", &bloodType);
    printf("2. ���� �Է� : ");
    scanf("%d", &age);
    printf("3. Ű �Է� : ");
    scanf("%f", &height);
    printf("4. ������ �Է� : ");
    scanf("%lf", &weight);

    printf("\n< �Ż����� ��� >\n");
    printf("1. ������ : %c��\n", bloodType);
    printf("2. ����   : %d��\n", age);
    printf("3. Ű     : %.1fcm\n", height);
    printf("4. ������ : %.1fkg\n", weight);

    return 0;
}
