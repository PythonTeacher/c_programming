#include <stdio.h>

int main()
{
    int score;
    char grade;

    printf("���� �Է� : ");
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


    printf("�Էµ� ���� : %d ��, ��� :%c\n", score, grade);
    return 0;
}
