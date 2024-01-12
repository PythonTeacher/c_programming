#include <stdio.h>

int main()
{
    double arr[5] = {1.5, 2.7, 3.4, 4.3, 5.9};
    int i, j;
    double temp;
    double *p=arr;

    // 1. 배열명을 사용한 배열 표현 방식
    /*puts("<< 배열 표현 방식 >>");
    for(i=0; i<4; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(i=0; i<5; i++)
    {
        printf("%.1f\n", arr[i]);
    }*/

    // 2. 배열명을 사용한 포인터 표현 방식
    /*puts("<< 포인터 표현 방식 >>");
    for(i=0; i<4; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(*(arr+i) > *(arr+j))
            {
                temp = *(arr+i);
                *(arr+i) = *(arr+j);
                *(arr+j) = temp;
            }
        }
    }

    for(i=0; i<5; i++)
    {
        printf("%.1f\n", *(arr+i));
    }*/

    // 3. 포인터 변수를 사용한 배열 표현 방식
    puts("<< 배열 표현 방식 >>");
    for(i=0; i<4; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(p[i] > p[j])
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    for(i=0; i<5; i++)
    {
        printf("%.1f\n", p[i]);
    }

    // 4. 포인터 변수를 사용한 포인터 표현 방식
    puts("<< 포인터 표현 방식 >>");
    for(i=0; i<4; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(*(p+i) > *(p+j))
            {
                temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
        }
    }

    for(i=0; i<5; i++)
    {
        printf("%.1f\n", *(p+i));
    }

    return 0;
}
