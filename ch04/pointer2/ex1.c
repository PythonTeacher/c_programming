#include <stdio.h>

int main()
{
    int num[5]={5,3,4,1,2};
    int i, tot=0;

    printf("�迭�� �����ּҰ� : %p, %p\n", num, &num[0]);
    printf("%d, %d\n", num[1], 1[num]);

    for(i=0; i<5; i++)
    {
        //1. �迭 ǥ�� ���
        /*printf("[%d]��° �ּҰ� : %p, �ʱⰪ : %d\n",
                    i, &num[i], num[i]);
        tot += num[i];*/

        //2. ������ ǥ�� ���
        printf("[%d]��° �ּҰ� : %p, �ʱⰪ : %d\n",
                    i, num+i, *(num+i));
        tot += *(num+i);
    }

    printf("\n�迭 ����� �� ���� %d �Դϴ�.\n", tot);

    return 0;
}
