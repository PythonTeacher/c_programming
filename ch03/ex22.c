#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int answer;             // 랜덤값
    int myanswer;           // 사용자 입려값

    int i;

    srand(time(NULL));          // 초기화 작업 (한번만)

    // 1~10까지의 랜덤값 얻기
    answer = rand() % 10 + 1;

    while(1)
    {
        printf("값 입력 : " );
        scanf("%d", &myanswer);

        if(answer == myanswer)
        {
            printf("정답 => %d\n", answer);
            break;
        }
        else if(answer > myanswer)
            printf("%d보다 큽니다\n", myanswer);
        else
           printf("%d보다 작습니다\n", myanswer);
    }


    return 0;
}

