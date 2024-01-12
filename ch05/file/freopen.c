#include <stdio.h>

int main()
{
    int i1, i2, i3;

    printf("키보드로 값 입력 => ");
    scanf("%d", &i1);

    // 키보드(표준입력) 대신 파일에서 읽어들임
    freopen("input.txt", "r", stdin);

    printf("파일에서 값 입력\n");
    scanf("%d", &i2);

    freopen("CON", "r", stdin);

    printf("다시 키보드로 값 입력 => ");
    scanf("%d", &i3);

    printf("i1:%d, i2:%d, i3:%d\n", i1, i2, i3);

    printf("모니터로 출력\n");

    // 모니터(표준출력) 대신 파일로 출력함
    freopen("output.txt", "w", stdout);

    printf("파일로 출력\n");

    freopen("CON", "w", stdout);

    printf("다시 모니터로 출력\n");

    return 0;
}
