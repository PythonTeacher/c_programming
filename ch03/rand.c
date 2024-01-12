#include <stdio.h>
#include <stdlib.h>     // rand(), srand()
#include <time.h>       // time()

int main()
{
    int i;

    srand(time(NULL));      // 랜덤값을 뽑아주기 위한 초기화 함수
                            // 난수표의 값을 바꿔주는 함수

    //printf("%d\n", time(NULL));     // 1970년 1월 1일 ~ 현재까지 초를 리턴해주는 함수


    /*for(i=0; i<10; i++)
        printf("%d\n", rand());       // 랜덤한 값을 뽑아주는 함수
    */
    // 1번 ~ 38번까지 번호 뽑기
    printf("당첨 => %d번\n", rand() % 38 + 1); // 0~37 -> 1~38

    return 0;
}
