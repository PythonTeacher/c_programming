#include <stdio.h>

int main()
{
    int a[5] = {5, 3, 4, 2, 1};

    int i, j, temp, cnt=0;

    printf("<< 정렬 전 배열 출력 >>\n");
    for(i=0; i<5; i++)
    {
        printf("%d ", a[i]);
    }

    for(i=1; i<5; i++)
    {
        for(j=0; j<5-i; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
            cnt++;
        }
        printf("\nSTEP %d : ", i);
        for(j=0; j<5; j++)
        {
            printf("%d ", a[j]);
        }
        printf("\n");
        printf("비교 횟수 : %d\n\n", cnt);
        cnt = 0;
    }

    printf("\n\n<< 버블 정렬 오름차순 출력 >>\n");
    for(i=0; i<5; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
