/** Dynamic memory allocation (DMA) **/
/* ���� �Ҵ��� Ȱ�� */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int student; // �Է� �ް��� �ϴ� �л� ��
    int i, input;
    int *score; // �л� ���� �������� ����
    int sum = 0; // ����

    printf("�л��� ����? : ");
    scanf("%d", &student);

    score = (int *)malloc(student*sizeof(int));

    for(i=0;i<student;i++)
    {
        printf("�л� %d �� ���� : ", i);
        scanf("%d", &input);

        score[i] = input;
    }

    for(i=0;i<student;i++)
    {
        sum += score[i];
    }

    printf("��ü �л� ��� ���� : %d \n", sum/student);

    return 0;

}

/* 2 ���� �迭�� ���� �Ҵ� */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i;
    int x,y;
    int **arr; // �츮�� arr[x][y] �� ���� ���̴�.


    printf("arr[x][y] �� ���� ���Դϴ�.\n");
    scanf("%d %d", &x, &y);

    arr = (int **)malloc(sizeof(int *) * x);
    // int* ���� ���Ҹ� x �� ������ 1 ���� �迭 ����

    for(i=0;i<x;i++)
    {
        arr[i] = (int *)malloc(sizeof(int) * y);
    }

    printf("���� �Ϸ�! \n");

    for(i=0;i<x;i++)
    {
        free(arr[i]);
    }
    free(arr);

    return 0;

}

/* 2 ���� �迭 ���� �Ҵ��� Ȱ�� */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i,j, input, sum = 0;
    int subject, students;
    int **arr;
    // �츮�� arr[subject][students] �迭�� ���� ���̴�.

    printf("���� �� : ");
    scanf("%d", &subject);

    printf("�л��� �� : ");
    scanf("%d", &students);

    arr =(int **)malloc(sizeof(int *) * subject);

    for(i=0;i<subject;i++)
    {
        arr[i]=(int *)malloc(sizeof(int) * students);
    }

    for(i=0;i<subject;i++)
    {
        printf("���� %d ���� --------- \n", i);

        for(j=0;j<students;j++)
        {
            printf("�л� %d ���� �Է� : ", j);
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
        printf("���� %d ��� ���� : %d \n", i, sum/students);
    }

    for(i=0;i<subject;i++)
    {
        free(arr[i]);
    }

    free(arr);

    return 0;
}


/* �Ҵ��� (2 ���� �迭 ó�� ����) �迭 �����ϱ� */
#include <stdio.h>
#include <stdlib.h>

void get_average(int **arr, int numStudent, int numSubject);

int main(int argc, char **argv)
{
    int i,j, input, sum = 0;
    int subject, students;
    int **arr;
    // �츮�� arr[subject][students] �迭�� ���� ���̴�.

    printf("���� �� : ");
    scanf("%d", &subject);

    printf("�л��� �� : ");
    scanf("%d", &students);

    arr =(int **)malloc(sizeof(int *) * subject);

    for(i=0;i<subject;i++)
    {
        arr[i]=(int *)malloc(sizeof(int) * students);
    }

    for(i=0;i<subject;i++)
    {
        printf("���� %d ���� --------- \n", i);

        for(j=0;j<students;j++)
        {
            printf("�л� %d ���� �Է� : ", j);
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
        printf("���� %d ��� ���� : %d \n", i, sum/numStudent);
    }
}
