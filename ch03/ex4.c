#include <stdio.h>

int main()
{
    int num1, num2;

    printf("정수 두개 입력 : ");
    scanf("%d%d", &num1, &num2);

    if(num1 > num2)
        printf("작은 값 : %d, 큰 값 : %d\n", num2, num1);
    else if(num1 < num2)
        printf("작은 값 : %d, 큰 값 : %d\n", num1, num2);
    else
        printf("같은 값\n");

    //else if(num1 == num2)
    //    printf("같은 값\n");


    return 0;
}
