#include <stdio.h>

int main()
{
    int num[5]={5,3,4,1,2};
    int i, tot=0;
    int *p = num;

    for(i=0; i<5; i++)
    {
        //1. �迭���� ����� �迭 ǥ�� ���
        /*printf("[%d]��° �ּҰ� : %p, �ʱⰪ : %d\n",
                    i, &num[i], num[i]);
        tot += num[i];*/

        //2. �迭���� ����� ������ ǥ�� ���
        /*printf("[%d]��° �ּҰ� : %p, �ʱⰪ : %d\n",
                    i, num+i, *(num+i));
        tot += *(num+i);*/

        //3. ������ ������ ����� �迭 ǥ�� ���
        printf("[%d]��° �ּҰ� : %p, �ʱⰪ : %d\n",
                    i, &p[i], p[i]);
        tot += p[i];

        //4. ������ ������ ����� ������ ǥ�� ���
        printf("[%d]��° �ּҰ� : %p, �ʱⰪ : %d\n",
                    i, p+i, *(p+i));
        tot += *(p+i);
    }

    printf("\n�迭 ����� �� ���� %d �Դϴ�.\n", tot);

    return 0;
}
