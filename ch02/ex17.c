#include <stdio.h>

int main()
{
    int kor, eng, mat;

    printf("�� ���� ���� �Է� : ");
    scanf("%d %d %d", &kor, &eng, &mat);

    printf("���� : %d\n", kor + eng + mat);
    printf("��� : %.1lf\n", (kor + eng + mat) / (double)3);
    return 0;
}

