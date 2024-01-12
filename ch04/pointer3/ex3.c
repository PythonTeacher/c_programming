#include <stdio.h>

void ascendingSort(double *p);
void descendingSort(double *p);
void printArray(const double *p);

int main()
{
    double array[5] = {4.3, 1.5, 3.4, 5.9, 2.7};

    puts("<< 오름차순 정렬 >>");
    ascendingSort(array);
    printArray(array);

    puts("<< 내림차순 정렬 >>");
    descendingSort(array);
    printArray(array);

    return 0;
}

// 오름차순 정렬 - 버블 정렬
void ascendingSort(double *p)       // double p[]
{
    double temp;
    int i, j;

    for(i=1; i<5; i++)
    {
        for(j=0; j<5-i; j++)
        {
            if(p[j] > p[j+1])
            {
                temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }
}

// 내림차순 정렬 - 선택 정렬
void descendingSort(double *p)       // double p[]
{
    double temp;
    int i, j;

    for(i=0; i<4; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(p[i] < p[j])
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
}

void printArray(const double *p)
{
    int i;
    for(i=0; i<5; i++)
        printf("[%d]번째 값 :%.1lf\n", i, p[i]);
}








