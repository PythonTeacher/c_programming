#include <stdio.h>

int main()
{
    int age, fare;

    printf("���̸� �Է��ϼ��� : ");
    scanf("%d", &age);

    printf("--------------------\n");

    if(age <= 7 || age >= 65)
        fare = 0;
    //else if(age >= 8 && age <= 13)
    else if(age <= 13)
        fare = 1000;
    else
        fare = 2000;

    printf("���� : %d��\n", age);
    printf("����ö ��� : %d��\n", fare);

    return 0;
}
