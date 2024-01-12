#include <stdio.h>

int main()
{
    int score;
    char grade;

    printf("점수 입력 : ");
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


    printf("입력된 점수 : %d 점, 등급 :%c\n", score, grade);
    return 0;
}
