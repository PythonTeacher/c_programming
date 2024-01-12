#include <stdio.h>

#define ROW 5
#define COL 5

int seats[ROW][COL];

void printMenu();
void reserveSeat(int row, int col);
void cancelSeat(int row, int col);
void printAllSeats();
void searchSeat(int row, int col);

int main()
{
    int i, j, menu;
    int rowSeat, colSeat;

    while(1)
    {
        printMenu();
        scanf("%d", &menu);
        if(menu == 9) break;

        if(menu == 1 || menu == 2 || menu == 4)
        {
            do
            {
                printf("�¼��� ���� �Է��ϼ��� (0~%d) => ", ROW-1);
                scanf("%d", &rowSeat);
            }while(rowSeat < 0 || rowSeat >= ROW);

            do
            {
                printf("�¼��� ���� �Է��ϼ��� (0~%d) => ", COL-1);
                scanf("%d", &colSeat);
            }while(colSeat < 0 || colSeat >= COL);
        }

        switch(menu)
        {
        case 1:
            reserveSeat(rowSeat, colSeat);  break;
        case 2:
            cancelSeat(rowSeat, colSeat);   break;
        case 3:
            printAllSeats();   break;
        case 4:
            searchSeat(rowSeat, colSeat);   break;
        default:
            printf("���� �޴��Դϴ�\n");
        }
    }

    return 0;
}

void printMenu()
{
    printf("------ << �޴� >> ------\n");
    printf("1. �¼� ����\n");
    printf("2. �¼� ���\n");
    printf("3. �¼� ��ȸ\n");
    printf("4. �¼� �˻�\n");
    printf("9. ����\n");
    printf("-------------------------\n");
    printf("�޴� �Է� => ");
}

void reserveSeat(int row, int col)
{
    // �̹� ����� �ڸ��̸� "�̹� ����� �ڸ��Դϴ�" ���
    // ���� �Ϸ� �� "����Ǿ����ϴ�" ���
    if(seats[row][col] == 1)
    {
        printf("�̹� ����� �ڸ��Դϴ�\n");
        return;
    }

    seats[row][col] = 1;
    printf("����Ǿ����ϴ�\n");
}

void cancelSeat(int row, int col)
{
    // ����� �ڸ��� �ƴϸ� "������� ���� �ڸ��Դϴ�" ���
    // ��� �Ϸ� �� "��ҵǾ����ϴ�" ���
    if(seats[row][col] == 0)
    {
        printf("������� ���� �ڸ��Դϴ�\n");
        return;
    }

    seats[row][col] = 0;
    printf("��ҵǾ����ϴ�\n");
}

void printAllSeats()
{
    int i, j;
    for(i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            printf("%3d", seats[i][j]);
        }
        printf("\n");
    }
}

void searchSeat(int row, int col)
{
    char yn;

    if(seats[row][col] == 1)
        printf("����� �¼��Դϴ�\n");
    else
    {
        printf("���� �ȵ� �¼��Դϴ�\n");
        printf("\n�����Ͻðڽ��ϱ�?");
        //fflush(stdin);
        while(getchar() != '\n');
        if((yn = getchar()) == 'y' || yn == 'Y')
            reserveSeat(row, col);
    }

}
