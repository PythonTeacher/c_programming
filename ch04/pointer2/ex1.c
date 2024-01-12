#include <stdio.h>

int main()
{
    int num[5]={5,3,4,1,2};
    int i, tot=0;

    printf("배열의 시작주소값 : %p, %p\n", num, &num[0]);
    printf("%d, %d\n", num[1], 1[num]);

    for(i=0; i<5; i++)
    {
        //1. 배열 표현 방식
        /*printf("[%d]번째 주소값 : %p, 초기값 : %d\n",
                    i, &num[i], num[i]);
        tot += num[i];*/

        //2. 포인터 표현 방식
        printf("[%d]번째 주소값 : %p, 초기값 : %d\n",
                    i, num+i, *(num+i));
        tot += *(num+i);
    }

    printf("\n배열 요소의 총 합은 %d 입니다.\n", tot);

    return 0;
}
