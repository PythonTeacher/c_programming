#include <stdio.h>

int main()
{
    int grade, price, flag=1;

    printf("학년을 입력하세요 : ");
    scanf("%d", &grade);

    printf("-------------------\n");

    switch(grade)
    {
    case 1:
    case 2:
        price = 2000;
        break;
    case 3:
    case 4:
        price = 4000;
        break;
    case 5:
    case 6:
        price = 6000;
        break;
    default:
        flag = 0;
        printf("잘못 입력\n");
    }

    if(flag)
        printf("급식비 : %d\n", price);

    return 0;
}
