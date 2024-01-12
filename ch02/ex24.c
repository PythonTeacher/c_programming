#include <stdio.h>

int main()
{
    int num1, num2;

    printf("정수 두개 입력 : ");
    scanf("%d%d", &num1, &num2);

   /*(num1 < num2) ?
        printf("작은 값 : %d, 큰 값 : %d\n", num1, num2) :
        printf("작은 값 : %d, 큰 값 : %d\n", num2, num1);

    printf("작은 값 : %d, 큰 값 : %d\n",
           (num1 < num2) ? num1 : num2,
           (num1 < num2) ? num2 : num1);
    */

    (num1 == num2) ? printf("같은 값\n") :
        (num1 < num2) ?
            printf("작은 값 : %d, 큰 값 : %d\n", num1, num2) :
            printf("작은 값 : %d, 큰 값 : %d\n", num2, num1);

    return 0;
}
