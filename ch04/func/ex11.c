#include <stdio.h>

#define ABS(x) ((x) > 0 ? (x) : -(x))

int main()
{
    int num;

    while(1)
    {
        printf("���� �Է� (0:����) => ");
        scanf("%d", &num);

        if(num == 0) break;

        printf("ABS : %d\n\n", ABS(num));
    }

    return 0;
}
