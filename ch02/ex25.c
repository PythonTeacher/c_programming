#include <stdio.h>

int main()
{
    int price, money, change;
    int _500, _100, _50, _10;

    printf("Ŀ�ǰ� �Է� : ");
    scanf("%d", &price);            // 1250

    printf("�� �Է� : ");
    scanf("%d", &money);            // 2000

    printf("-----------------\n");
    change = money - price;         // 750
    printf("�Ž��� �� : %d��\n", change);

    _500 = change / 500;   // 1
    //change = change - (500 * _500); // 250
    change = change % 500;  // 250

    _100 = change / 100;     // 2
    change = change % 100;   // 50

    _50 = change / 50;      // 1
    change = change % 50;   // 0

    _10 = change / 10;      // 0

    printf("500�� : %d��, 100�� : %d��, 50�� : %d��, 10�� : %d��\n",
            _500, _100, _50, _10);

    return 0;
}
