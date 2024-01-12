#include <stdio.h>

int main()
{
    int num[5]={5,3,4,1,2};
    int i, tot=0;
    int size;

    size = sizeof(num) / sizeof(num[0]);

    for(i=0; i<size; i++)
    {
        printf("[%d]번째 값 : %d\n", i, num[i]);
        tot += num[i];
    }

    printf("배열 요소의 총 합은 %d 입니다.\n", tot);

    return 0;
}
