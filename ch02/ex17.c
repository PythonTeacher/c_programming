#include <stdio.h>

int main()
{
    int kor, eng, mat;

    printf("세 과목 점수 입력 : ");
    scanf("%d %d %d", &kor, &eng, &mat);

    printf("총점 : %d\n", kor + eng + mat);
    printf("평균 : %.1lf\n", (kor + eng + mat) / (double)3);
    return 0;
}

