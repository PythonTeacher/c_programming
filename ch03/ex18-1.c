#include <stdio.h>

int main()
{
    int i, dan;

    printf("�ܼ� �Է� => ");
    scanf("%d", &dan);

    for(i=1; i<=9; i++)
    {
        printf("%d * %d = %2d\n", dan, i, dan*i);
    }

    return 0;
}
