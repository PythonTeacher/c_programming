#include <stdio.h>

void input(int *pa, int *pb);
void compare(int n1, int n2, int *pMin, int *pMax);
void output(int min, int max);

int main()
{
    int n1, n2;
    int min, max;

    input(&n1, &n2);
    // n1, n2에 값이 들어가있음

    compare(n1, n2, &min, &max);
    // min, max에 값이 들어가 있음

    output(min, max);

    return 0;
}

void input(int *pa, int *pb)
{
    printf("정수 두개 입력 => ");
    scanf("%d %d", pa, pb);
}

void compare(int n1, int n2, int *pMin, int *pMax)
{
    if(n1 < n2)
    {
        *pMin = n1;
        *pMax = n2;
    }
    else
    {
        *pMin = n2;
        *pMax = n1;
    }
}

void output(int min, int max)
{
    if(min == max)
        printf("같은 값\n");
    else
        printf("작은값 :%d, 큰값 : %d\n", min, max);
}
