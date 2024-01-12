#include <stdio.h>

int main()
{
    int price, money, change;
    int _500, _100, _50, _10;

    printf("커피값 입력 : ");
    scanf("%d", &price);            // 1250

    printf("돈 입력 : ");
    scanf("%d", &money);            // 2000

    printf("-----------------\n");
    change = money - price;         // 750
    printf("거스름 돈 : %d원\n", change);

    _500 = change / 500;   // 1
    //change = change - (500 * _500); // 250
    change = change % 500;  // 250

    _100 = change / 100;     // 2
    change = change % 100;   // 50

    _50 = change / 50;      // 1
    change = change % 50;   // 0

    _10 = change / 10;      // 0

    printf("500원 : %d개, 100원 : %d개, 50원 : %d개, 10원 : %d개\n",
            _500, _100, _50, _10);

    return 0;
}
