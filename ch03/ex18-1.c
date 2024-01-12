#include <stdio.h>

int main()
{
    int i, dan;

    printf("단수 입력 => ");
    scanf("%d", &dan);

    for(i=1; i<=9; i++)
    {
        printf("%d * %d = %2d\n", dan, i, dan*i);
    }

    return 0;
}
