#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int i, tot=0;

    printf("사람 수 입력 => ");
    scanf("%d", &num);

    int *p = (int *)malloc(num * sizeof(int));

    if(p == NULL)
    {
        puts("Out of Memory");
        exit(1);
    }

    for(i=0; i<num; i++)
    {
        printf("%d번째 나이 입력 => ", i+1);
        scanf("%d", &p[i]);
        //scanf("%d", p+i);
        tot += p[i];
    }

    printf("%d명의 나이 평균 :%d\n", num, tot/num);

    free(p);
    p = NULL;

    return 0;
}
