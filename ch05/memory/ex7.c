#include <stdio.h>
#include <string.h>     // memset
#include <stdlib.h>     // malloc, free

int main()
{
    int num, i;

    printf("정수 갯수 입력 => ");
    scanf("%d", &num);

    int *p = (int *)malloc(num * sizeof(int));
    if(p == NULL)
    {
        puts("Out of MEmory");
        exit(1);
    }

    memset(p, 0, num * sizeof(int));

    for(i=0; i<num; i++)
        printf("%d번째 값 :%d\n", i, p[i]);

    return 0;
}
