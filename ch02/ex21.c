#include <stdio.h>

int main()
{
    int n1, n2;
    printf("정수 두개 입력 : ");
    scanf("%d%d", &n1, &n2);

    n1 += n2;   // n1 = n1 + n2;
    printf("%d, %d\n", n1, n2);

    return 0;
}
