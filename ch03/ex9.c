#include <stdio.h>

int main()
{
    int score;
    char grade;

    printf("점수 입력 : ");
    scanf("%d", &score);

    switch(score / 10)
    {
    case 10:
    case 9: // 90~99
        grade = 'A';
        break;
    case 8: // 80~89
        grade = 'B';
        break;
    case 7: // 70~79
        grade = 'C';
        break;
    case 6: // 60~69
        grade = 'D';
        break;
    default:    //0~59
        grade = 'F';
    }


    printf("입력된 점수 : %d 점, 등급 :%c\n", score, grade);
    return 0;
}
