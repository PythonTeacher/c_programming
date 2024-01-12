#include <stdio.h>

int main()
{
    double height[5];
    int size, i, j;
    double temp, tot=0;

    size = sizeof(height) / sizeof(height[0]);

    for(i=0; i<size; i++)
    {
        printf("%d번째 학생의 키를 입력하세요 : ", i+1);
        scanf("%lf", &height[i]);
        tot += height[i];
    }

    // 버블 정렬 오름차순
    for(i=1; i<size; i++)
    {
        for(j=0; j<size-i; j++)
        {
            if(height[j] > height[j+1])
            {
                temp = height[j];
                height[j] = height[j+1];
                height[j+1] = temp;
            }
        }
    }

    printf("\n << 결과 출력 >>\n");
    printf("1. 키 평균 : %.1lf\n", tot/size);
    printf("2. 가장 작은 키 : %.1lf\n", height[0]);
    printf("3. 가장 큰 키 : %.1lf\n", height[size-1]);

    return 0;
}
