#include <stdio.h>
#include <string.h>     // memset
#include <stdlib.h>     // malloc, free

int main()
{
    int num, i;

    printf("���� ���� �Է� => ");
    scanf("%d", &num);

    int *p = (int *)malloc(num * sizeof(int));
    if(p == NULL)
    {
        puts("Out of MEmory");
        exit(1);
    }

    memset(p, 0, num * sizeof(int));

    for(i=0; i<num; i++)
        printf("%d��° �� :%d\n", i, p[i]);

    return 0;
}
