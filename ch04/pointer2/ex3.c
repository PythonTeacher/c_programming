#include <stdio.h>

int main()
{
    double arr[5] = {3.4, 4.3, 1.5, 2.7, 5.9};
    int i, j;
    double temp;

    // 1. �迭 ǥ�� ���
    /*puts("<< �迭 ǥ�� ��� >>");
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
        printf("%.1f\n", arr[i]);*/

    // 2. ������ ǥ�� ���
    puts("<< ������ ǥ�� ��� >>");
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
        printf("%.1f\n", *(arr+i));


    return 0;
}
