#include <stdio.h>

// 함수 정의하기
void printFollow()
{
    int i;
    for(i=1; i<=10; i++)
    {
        printf("%2d번째 : ", i);
        printf("뽤로우 뽤로우 미!!\n");
    }
    return;
}

int main()
{
    printFollow();  // 함수 호출하기
    return 0;
}
