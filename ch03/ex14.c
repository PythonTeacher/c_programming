#include <stdio.h>

int main()
{
    int num;
    int i=1;        // �ε��� ����

    printf("���� �Է� : ");
    scanf("%d", &num);

    printf("----------------\n");

    while(i <= num)
    {
        if(i % 3 == 0)
            printf("¦\n");
        else
            printf("%d\n", i);
        i++;
    }

    return 0;
}
