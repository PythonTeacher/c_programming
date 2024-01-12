#include <stdio.h>

void input(int *, int *, int *);
void getGrade(double , char *);

int main()
{
    int kor, eng, mat, tot;
    double avg;
    char grade;

    input(&kor, &eng, &mat);
    // 점수 입력 끝

    tot = kor + eng + mat;
    avg = tot / (double)3;

    getGrade(avg, &grade);
    // 등급 계산 끝

    printf("\n국어 : %d점, 영어 : %d점, 수학 : %d점\n", kor, eng, mat);
    printf("총점 : %d점, 평균 : %.1lf점, 등급 : %c", tot, avg, grade);

    return 0;
}

void input(int *pk, int *pe, int *pm)
{
    printf("국영수 성적 입력하세요 => ");
    scanf("%d %d %d", pk, pe, pm);
}

void getGrade(double avg, char *pGrade)
{
    switch((int)avg / 10)
    {
    case 10:
    case 9:
        *pGrade = 'A';  break;
    case 8:
        *pGrade = 'B';  break;
    case 7:
        *pGrade = 'C';  break;
    case 6:
        *pGrade = 'D';  break;
    default:
        *pGrade = 'F';
    }
}










