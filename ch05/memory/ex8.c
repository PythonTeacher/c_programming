#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, j;
    int size = 5;     // 한번에 할당한 배열 사이즈
    int *p = NULL;

    for(i=0; ; i++)
    {
        printf("양수 입력 (음수면 종료) => ");
        scanf("%d", &num);

        if(num < 0) break;

        if(i % 5 == 0)
        {
            p = (int *)realloc(p, size * sizeof(int));
            if(p == NULL)
            {
                puts("OOM");
                exit(1);
            }
            size += 5;
        }
        p[i] = num;
    }

    for(j=0; j<i; j++)
    {
        printf("%d번째 값 => %d\n", j, p[j]);
    }

    return 0;
}
