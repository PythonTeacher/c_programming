#include <stdio.h>

void printStar(int n, int m);

int main()
{
    int disc = 3;

    printf("�ϳ����� ž\n");
    hanoi(disc, 'A', 'B', 'C');

    return 0;
}

void hanoi(int n, char from, char mid, char to)
{
    if(n > 0)
    {
        hanoi(n-1, from, to, mid);
        printf("���� %d : %c -> %c�� �̵�\n", n, from, to);
        hanoi(n-1, mid, from, to);
    }
}
