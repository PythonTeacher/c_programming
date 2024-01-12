#include <stdio.h>

int main()
{
    int radius = 5;         // 반지름
    const float PI = 3.14;
    //PI = 4.5;

    printf("원의 넓이 : %.1lf\n", PI * radius * radius);
    return 0;
}
