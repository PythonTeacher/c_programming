#include <stdio.h>

int main()
{
    int i1, i2, i3;

    printf("Ű����� �� �Է� => ");
    scanf("%d", &i1);

    // Ű����(ǥ���Է�) ��� ���Ͽ��� �о����
    freopen("input.txt", "r", stdin);

    printf("���Ͽ��� �� �Է�\n");
    scanf("%d", &i2);

    freopen("CON", "r", stdin);

    printf("�ٽ� Ű����� �� �Է� => ");
    scanf("%d", &i3);

    printf("i1:%d, i2:%d, i3:%d\n", i1, i2, i3);

    printf("����ͷ� ���\n");

    // �����(ǥ�����) ��� ���Ϸ� �����
    freopen("output.txt", "w", stdout);

    printf("���Ϸ� ���\n");

    freopen("CON", "w", stdout);

    printf("�ٽ� ����ͷ� ���\n");

    return 0;
}
