#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main()
{
    int random;
    int i;

    // [난수표]란?
    // <stdlib.h>라는 헤더파일 안에는 난수 테이블이 들어있습니다.
    // 난수표에는 0~32767까지의 숫자(unsigned int)가 무작위배열로 되어있습니다

    // rand() 함수
    // 난수표 안에서 무작위로 숫자를 뽑아주는 랜덤 함수
    // printf("%d\n", rand());

    // srand() 함수를 통해 매번 난수표의 값을 바꿔줘야 함
    // srand() 사이에는 난수표 값을 바꿔주기 위한 seed값이 들어가야 함
    // time(NULL)을 통해 seed값 변경해 주기

    // printf("%d\n", time(NULL));     // 1970년 1월 1일부터 지금까지의 시간을 초 단위로 가져오는 함수

    // rand()와 srand()는 stdlib.h include
    // time()은 time.h include

    srand(time(NULL));

    for(i=5; i>0; i--)
    {
        Sleep(1000);
        system("cls");
        printf("%d", i);
    }
    printf("\n");
    Sleep(1000);

    random = rand() % 38 + 1;   // 0~37 -> 1~38
    printf("축하합니다!! => %d번\n", random);

    return 0;
}
