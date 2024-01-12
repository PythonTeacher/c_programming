#include <stdio.h>

int main()
{
    int num1, num2, i;

    scanf("%d %d", &num1, &num2);

    // swap
    if(num1 > num2)
    {
        num1 ^= num2;   // num1 = num1 ^ num2;
        num2 ^= num1;   // num2 = num2 ^ num1;
        num1 ^= num2;   // num1 = num1 ^ num2;
    }

    for(i=num1; i<=num2; i++)   // num1:5, num2:10
    {
        printf("%d ", i);
    }

    return 0;
}
