#include <stdio.h>

void getMenu(int *pMenu);
void searchBalance(int balance);
void deposit(int *pBalance);
void withdraw(int *pBalance);
int checkBalance(int *pBalance, int money);

int main()
{
    int balance=0;
    int menu;

    while(1)
    {
        getMenu(&menu);
        switch(menu)
        {
        case 1:
            searchBalance(balance); break;
        case 2:
            deposit(&balance);      break;
        case 3:
            withdraw(&balance);     break;
        case 9:
            printf("Bye!!\n");  return 0;
        default:
            puts("없는 메뉴입니다!!");
        }
    }

    return 0;
}

void getMenu(int *pMenu)
{
    puts("=====<< 메뉴 >>=====");
    puts("1. 잔고조회");
    puts("2. 입금");
    puts("3. 출금");
    puts("9. 종료");
    puts("====================");
    printf("메뉴 입력 => ");
    scanf("%d", pMenu);
}

void searchBalance(int balance)
{
    printf("현재 잔고는 %d원입니다\n\n", balance);
}

void deposit(int *pBalance)
{
    int money;
    printf("입금할 금액을 입력하세요 => ");
    scanf("%d", &money);

    *pBalance += money;
    puts("입금되었습니다\n");
}

void withdraw(int *pBalance)
{
    int money;
    printf("출금할 금액을 입력하세요 => ");
    scanf("%d", &money);

    if(checkBalance(*pBalance, money) < 0) return;

    *pBalance -= money;
    puts("출금되었습니다\n");
}

int checkBalance(int *pBalance, int money)
{
    // 잔고 체크
    if(*pBalance < money)
    {
        printf("잔고가 부족합니다. 현재 잔고 : %d원\n", *pBalance);
        return -1;
    }
    return 0;
}
