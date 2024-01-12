#include <stdio.h>

void printStar(int n, int m);

int main()
{
    int disc = 3;

    printf("하노이의 탑\n");
    hanoi(disc, 'A', 'B', 'C');

    return 0;
}

void hanoi(int n, char from, char mid, char to)
{
    if(n > 0)
    {
        hanoi(n-1, from, to, mid);
        printf("원판 %d : %c -> %c로 이동\n", n, from, to);
        hanoi(n-1, mid, from, to);
    }
}
