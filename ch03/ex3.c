#include <stdio.h>

int main()
{
    int num;

    printf("���� �Է� : ");
    scanf("%d", &num);

   // if(num % 2 == 0)
    if(!(num % 2))
    {
        printf("%d�� ¦�� �Դϴ�\n", num);
    }
    else
    {
        printf("%d�� Ȧ�� �Դϴ�\n", num);
    }
    return 0;
}
