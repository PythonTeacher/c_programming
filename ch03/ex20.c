#include <stdio.h>

int main()
{
    int i, j;

    printf("< 전체 구구단 출력 >\n");

    for(i=1; i<=9; i++)
    {
        for(j=2; j<=9; j++)
        {
            printf("%d*%d=%2d  ", j, i, j * i);
        }
        printf("\n");
    }


    return 0;
}
