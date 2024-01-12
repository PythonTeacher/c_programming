#include <stdio.h>

int main()
{
    int age, fare;

    printf("나이를 입력하세요 : ");
    scanf("%d", &age);

    printf("--------------------\n");

    if(age <= 7 || age >= 65)
        fare = 0;
    //else if(age >= 8 && age <= 13)
    else if(age <= 13)
        fare = 1000;
    else
        fare = 2000;

    printf("나이 : %d세\n", age);
    printf("지하철 요금 : %d원\n", fare);

    return 0;
}
