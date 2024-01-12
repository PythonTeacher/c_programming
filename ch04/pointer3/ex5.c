#include <stdio.h>

void input(int (*p)[3]);
void output(int (*p)[3]);

int main()
{
    int score[4][3];

    input(score);
    output(score);

    return 0;
}

void input(int (*p)[3])
{
    int i, j;
    for(i=0; i<4; i++)
    {
        printf("[%d]번째 점수 입력 : ", i+1);
        for(j=0; j<3; j++)
            scanf("%d", &p[i][j]);
    }
}

void output(int (*p)[3])
{
    int i, j, tot=0;
    for(i=0; i<4; i++)
    {
        tot = 0;
        printf("[%d] : ", i+1);
        for(j=0; j<3; j++)
        {
            printf("%d\t", p[i][j]);
            tot += p[i][j];
        }
        printf("%d \t %.1f\n", tot, tot/3.0);
    }
}



