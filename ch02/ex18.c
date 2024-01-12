#include <stdio.h>

int main()
{
    char bloodType;
    int age;
    float height;
    double weight;

    printf("< 신상정보 입력 >\n");
    printf("1. 혈액형 입력 : ");
    scanf("%c", &bloodType);
    printf("2. 나이 입력 : ");
    scanf("%d", &age);
    printf("3. 키 입력 : ");
    scanf("%f", &height);
    printf("4. 몸무게 입력 : ");
    scanf("%lf", &weight);

    printf("\n< 신상정보 출력 >\n");
    printf("1. 혈액형 : %c형\n", bloodType);
    printf("2. 나이   : %d세\n", age);
    printf("3. 키     : %.1fcm\n", height);
    printf("4. 몸무게 : %.1fkg\n", weight);

    return 0;
}
