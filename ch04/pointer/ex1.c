#include <stdio.h>
int main()
{
    char c = 'A';
    int i = 10;
    double d = 3.14;

    printf("c : %c, &c : %p\n", c, &c);
    printf("i : %d, &i : %p\n",  i, &i);
    printf("d : %.2lf, &d : %p\n", d, &d);

    printf("%d, %d\n", sizeof(c), sizeof(&c));	    // 4
    printf("%d, %d\n", sizeof(i), sizeof(&i));	    // 4
    printf("%d, %d\n", sizeof(d), sizeof(&d));	    // 4

    return 0;
}
