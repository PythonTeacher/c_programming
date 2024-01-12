#include <stdio.h>

int getCount(int n) ;

int main()
{
    int from, to;
    int i, j, cnt;

    printf("시작값과 끝값 입력 =>");
    scanf("%d %d", &from, &to);     // 30 40

    for(i=from; i<=to; i++)
    {
        printf("[%d] => ", i);
        cnt = getCount(i);      // 33 -> 2, 333 -> 3

        if(cnt == 0) printf("%d", i);
        else
        {
            for(j=0; j<cnt; j++)
                printf("짝");
        }
        printf("\n");
    }
    return 0;
}

int getCount(int n)         // 33
{
    int cnt=0;

    while(1)
    {
        if(n % 10 == 3 || n % 10 == 6 || n % 10 == 9)
            cnt++;      // 1 -> 2
        n /= 10;        // n = n / 10;
        if(n == 0) break;
    }

    return cnt;
}





