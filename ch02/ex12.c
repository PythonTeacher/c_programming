#include <stdio.h>

int main()
{
    int num = 10, age = 17;
    float height, weight;
    char bloodType = 'A';
    height = 168.3;
    weight = 48.5;
    printf("1. 이름 : 수지\n");
    printf("2. 번호 : %d\n", num);
    printf("3. 나이 : %d\n", age);
    printf("4. 키 : %.1lf cm\n", height);
    printf("5. 몸무게 : %.1lf kg\n", weight);
    printf("6. 혈액형 : %c 형\n", bloodType);
    return 0;
}
