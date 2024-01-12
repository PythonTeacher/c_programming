#include <stdio.h>

int main()
{
    int num[5]={5,3,4,1,2};
    int i, tot=0;
    int *p = num;

    for(i=0; i<5; i++)
    {
        //1. 배열명을 사용한 배열 표현 방식
        /*printf("[%d]번째 주소값 : %p, 초기값 : %d\n",
                    i, &num[i], num[i]);
        tot += num[i];*/

        //2. 배열명을 사용한 포인터 표현 방식
        /*printf("[%d]번째 주소값 : %p, 초기값 : %d\n",
                    i, num+i, *(num+i));
        tot += *(num+i);*/

        //3. 포인터 변수를 사용한 배열 표현 방식
        printf("[%d]번째 주소값 : %p, 초기값 : %d\n",
                    i, &p[i], p[i]);
        tot += p[i];

        //4. 포인터 변수를 사용한 포인터 표현 방식
        printf("[%d]번째 주소값 : %p, 초기값 : %d\n",
                    i, p+i, *(p+i));
        tot += *(p+i);
    }

    printf("\n배열 요소의 총 합은 %d 입니다.\n", tot);

    return 0;
}
