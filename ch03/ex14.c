#include <stdio.h>

int main()
{
    int num;
    int i=1;        // 인덱스 변수

    printf("정수 입력 : ");
    scanf("%d", &num);

    printf("----------------\n");

    while(i <= num)
    {
        if(i % 3 == 0)
            printf("짝\n");
        else
            printf("%d\n", i);
        i++;
    }

    return 0;
}
