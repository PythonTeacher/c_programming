#include <stdio.h>

void input(int *, int *, int *);
void getGrade(double , char *);

int main()
{
    int kor, eng, mat, tot;
    double avg;
    char grade;

    input(&kor, &eng, &mat);
    // ���� �Է� ��

    tot = kor + eng + mat;
    avg = tot / (double)3;

    getGrade(avg, &grade);
    // ��� ��� ��

    printf("\n���� : %d��, ���� : %d��, ���� : %d��\n", kor, eng, mat);
    printf("���� : %d��, ��� : %.1lf��, ��� : %c", tot, avg, grade);

    return 0;
}

void input(int *pk, int *pe, int *pm)
{
    printf("������ ���� �Է��ϼ��� => ");
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










