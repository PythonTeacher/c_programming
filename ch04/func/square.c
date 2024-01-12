#include <stdio.h>

#define SQUARE(x) (x * x)
#define SQUARE1(x) ((x) * (x))

int main()
{
    int i=2;

    printf("%d\n", SQUARE(i));
    printf("%d\n", (i * i));        // 4
    printf("%d\n", SQUARE(i+2));
    printf("%d\n", (i+2 * i+2));    // 2+2 * 2+2 = 8
    printf("%d\n", SQUARE1(i+2));
    return 0;
}
