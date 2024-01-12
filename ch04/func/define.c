#include <stdio.h>

#define print(str, var) printf("%s = %d\n", str, var)

int main()
{
    int i=2, j=3;

    print("i + j", i + j);
    print("i - j", i - j);
    print("i * j", i * j);
    print("i / j", i / j);

    return 0;
}
