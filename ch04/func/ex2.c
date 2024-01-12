#include <stdio.h>

// 함수 원형을 선언하기
void printFollow(int num);      // void printFollow(int);

int main()
{
    int num;

    printf("반복 횟수 입력 : ");
    scanf("%d", &num);

    printFollow(num);      // 함수 호출하기
    return 0;
}

// 함수 정의하기
void printFollow(int num)
{
    int i;
    for(i=0; i<num; i++)
    {
        printf("%2d번째 : ", i + 1);
        printf("뽤로우 뽤로우 미!!\n");
    }
    //return;
}
