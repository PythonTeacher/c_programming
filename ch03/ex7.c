#include <stdio.h>

int main()
{
    int score;
    char grade;

    printf("���� �Է� : ");
    scanf("%d", &score);
    // 90 <= score <= 100 (X)
    if(score >= 90 && score <= 100)
        grade = 'A';
    else if(score >= 80)
        grade = 'B';
    else if(score >= 70)
        grade = 'C';
    else if(score >= 60)
        grade = 'D';
    else
        grade = 'F';


    printf("�Էµ� ���� : %d ��, ��� :%c\n", score, grade);
    return 0;
}
