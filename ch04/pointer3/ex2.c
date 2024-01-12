#include <stdio.h>

#define SIZE    5

void printArray(const int *p, int);

int main()
{
    int num[5] = {5,3,4,1,2};
    int size = sizeof(num) / sizeof(num[0]);

    printArray(num, size);

    return 0;
}

void printArray(const int *p, int size)
{
    int i, tot=0;

    for(i=0; i<size; i++)
    {
        //printf("[%d]번째 값 : %d\n", i, p[i]);
        //tot += p[i];
        printf("[%d]번째 값 : %d\n", i, *(p+i));
        tot += *(p+i);
    }
    printf("총합 : %d\n", tot);
}
