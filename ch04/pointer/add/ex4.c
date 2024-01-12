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
            puts("���� �޴��Դϴ�!!");
        }
    }

    return 0;
}

void getMenu(int *pMenu)
{
    puts("=====<< �޴� >>=====");
    puts("1. �ܰ���ȸ");
    puts("2. �Ա�");
    puts("3. ���");
    puts("9. ����");
    puts("====================");
    printf("�޴� �Է� => ");
    scanf("%d", pMenu);
}

void searchBalance(int balance)
{
    printf("���� �ܰ�� %d���Դϴ�\n\n", balance);
}

void deposit(int *pBalance)
{
    int money;
    printf("�Ա��� �ݾ��� �Է��ϼ��� => ");
    scanf("%d", &money);

    *pBalance += money;
    puts("�ԱݵǾ����ϴ�\n");
}

void withdraw(int *pBalance)
{
    int money;
    printf("����� �ݾ��� �Է��ϼ��� => ");
    scanf("%d", &money);

    if(checkBalance(*pBalance, money) < 0) return;

    *pBalance -= money;
    puts("��ݵǾ����ϴ�\n");
}

int checkBalance(int *pBalance, int money)
{
    // �ܰ� üũ
    if(*pBalance < money)
    {
        printf("�ܰ� �����մϴ�. ���� �ܰ� : %d��\n", *pBalance);
        return -1;
    }
    return 0;
}
