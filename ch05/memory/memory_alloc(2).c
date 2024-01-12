/** Dynamic memory allocation (DMA) **/
/* 동적 할당의 활용 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int student; // 입력 받고자 하는 학생 수
    int i, input;
    int *score; // 학생 들의 수학점수 변수
    int sum = 0; // 총점

    printf("학생의 수는? : ");
    scanf("%d", &student);

    score = (int *)malloc(student*sizeof(int));

    for(i=0;i<student;i++)
    {
        printf("학생 %d 의 점수 : ", i);
        scanf("%d", &input);

        score[i] = input;
    }

    for(i=0;i<student;i++)
    {
        sum += score[i];
    }

    printf("전체 학생 평균 점수 : %d \n", sum/student);

    return 0;

}

/* 2 차원 배열의 동적 할당 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i;
    int x,y;
    int **arr; // 우리는 arr[x][y] 를 만들 것이다.


    printf("arr[x][y] 를 만들 것입니다.\n");
    scanf("%d %d", &x, &y);

    arr = (int **)malloc(sizeof(int *) * x);
    // int* 형의 원소를 x 개 가지는 1 차원 배열 생성

    for(i=0;i<x;i++)
    {
        arr[i] = (int *)malloc(sizeof(int) * y);
    }

    printf("생성 완료! \n");

    for(i=0;i<x;i++)
    {
        free(arr[i]);
    }
    free(arr);

    return 0;

}

/* 2 차원 배열 동적 할당의 활용 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i,j, input, sum = 0;
    int subject, students;
    int **arr;
    // 우리는 arr[subject][students] 배열을 만들 것이다.

    printf("과목 수 : ");
    scanf("%d", &subject);

    printf("학생의 수 : ");
    scanf("%d", &students);

    arr =(int **)malloc(sizeof(int *) * subject);

    for(i=0;i<subject;i++)
    {
        arr[i]=(int *)malloc(sizeof(int) * students);
    }

    for(i=0;i<subject;i++)
    {
        printf("과목 %d 점수 --------- \n", i);

        for(j=0;j<students;j++)
        {
            printf("학생 %d 점수 입력 : ", j);
            scanf("%d", &input);

            arr[i][j] = input;
        }
    }

    for(i=0;i<subject;i++)
    {
        sum = 0;
        for(j=0;j<students;j++)
        {
            sum += arr[i][j];
        }
        printf("과목 %d 평균 점수 : %d \n", i, sum/students);
    }

    for(i=0;i<subject;i++)
    {
        free(arr[i]);
    }

    free(arr);

    return 0;
}


/* 할당한 (2 차원 배열 처럼 생긴) 배열 전달하기 */
#include <stdio.h>
#include <stdlib.h>

void get_average(int **arr, int numStudent, int numSubject);

int main(int argc, char **argv)
{
    int i,j, input, sum = 0;
    int subject, students;
    int **arr;
    // 우리는 arr[subject][students] 배열을 만들 것이다.

    printf("과목 수 : ");
    scanf("%d", &subject);

    printf("학생의 수 : ");
    scanf("%d", &students);

    arr =(int **)malloc(sizeof(int *) * subject);

    for(i=0;i<subject;i++)
    {
        arr[i]=(int *)malloc(sizeof(int) * students);
    }

    for(i=0;i<subject;i++)
    {
        printf("과목 %d 점수 --------- \n", i);

        for(j=0;j<students;j++)
        {
            printf("학생 %d 점수 입력 : ", j);
            scanf("%d", &input);

            arr[i][j] = input;
        }
    }

    get_average(arr, students, subject);

    for(i=0;i<subject;i++)
    {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
void get_average(int **arr, int numStudent, int numSubject)
{
    int i,j, sum;

    for(i=0;i<numSubject;i++)
    {
        sum = 0;
        for(j=0;j<numStudent;j++)
        {
            sum += arr[i][j];
        }
        printf("과목 %d 평균 점수 : %d \n", i, sum/numStudent);
    }
}
