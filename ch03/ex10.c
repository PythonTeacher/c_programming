#include <stdio.h>

int main()
{
    int grade, price;

    printf("학년을 입력하세요 : ");
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
        printf("급식비 : %d원\n", grade *1000);
        break;
    default:
        printf("없는 학년\n");
    }
    return 0;
}
