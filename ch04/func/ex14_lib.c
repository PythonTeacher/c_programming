#include <stdio.h>
#include <math.h>
#include <stdlib.h>     // abs

int main()
{
    int a, b;

    printf("���� �� �� �Է� : ");
    scanf("%d %d", &a, &b);

    printf("<< �ŵ����� >>\n");
    printf("%d ^ %d = %d\n", a, b, (int)pow(a, b));
    printf("%d ^ %d = %.0f\n", a, b, pow(a, b));

    printf("\n<< ������ >>\n");
    printf("%d\n", (int)sqrt(9));        // 3

    printf("\n<< ���� >>\n");
    printf("%d\n", abs(-123));          // 123

    printf("\n<< �ø�, ����, �ݿø� >>\n");
    printf("%d\n", (int)ceil(10.1));        // 11
    printf("%d\n", (int)floor(10.9));       // 10
    printf("%d\n", (int)round(10.5));       // 11




    return 0;
}
