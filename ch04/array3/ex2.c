#include <stdio.h>

int main()
{
    int array[4][3];

    printf("sizeof(array) : %d\n", sizeof(array));  // 48
    printf("sizeof(array[0]) : %d\n", sizeof(array[0]));  // 12
    printf("sizeof(array[0][0]) : %d\n", sizeof(array[0][0]));  // 4

    return 0;
}
