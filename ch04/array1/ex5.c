#include <stdio.h>

int main()
{
    int num[5]={5,3,4,1,2};
    int i, tot=0;
    int size;
    int j, temp;

    size = sizeof(num) / sizeof(num[0]);

    for(i=0; i<size; i++)
    {
        printf("[%d]번째 값 : %d\n", i, num[i]);
        tot += num[i];
    }

    printf("배열 요소의 총 합은 %d 입니다.\n", tot);

    // 버블 정렬 오름차순
    for(i=1; i<size; i++)
    {
        for(j=0; j<size-i; j++)
        {
            if(num[j] > num[j+1])
            {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }

    printf("\n오름차순 정렬 후 출력\n");
    for(i=0; i<size; i++)
    {
        printf("[%d]번째 값 : %d\n", i, num[i]);
    }

    // 버블 정렬 내림차순
    for(i=1; i<size; i++)
    {
        for(j=0; j<size-i; j++)
        {
            if(num[j] < num[j+1])
            {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }

    printf("\n내림차순 정렬 후 출력\n");
    for(i=0; i<size; i++)
    {
        printf("[%d]번째 값 : %d\n", i, num[i]);
    }

    return 0;
}
