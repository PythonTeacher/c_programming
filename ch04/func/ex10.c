#include <stdio.h>

#define MAX(x,y) ((x) > (y) ? (x) : (y))

int main()
{
    int i, j;

    printf("�� ���� ���� �Է� : ");
    scanf("%d %d", &i, &j);

    printf("MAX : %d\n", MAX(i, j));

    // ((i) > (j) ? (i) : (j))

    return 0;
}
