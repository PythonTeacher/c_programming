#include <stdio.h>
int main()
{
    char c = 'A';
    int i = 10;
    double d = 3.14;

    char *pc = &c;
    int *pi = &i;
    double *pd = &d;

    printf("c : %c, &c : %d\n", c, &c);
    printf("i : %d, &i : %d\n",  i, &i);
    printf("d : %.2lf, &d : %d\n", d, &d);

    /*printf("%d, %d\n", sizeof(c), sizeof(&c));	    // 4
    printf("%d, %d\n", sizeof(i), sizeof(&i));	// 4
    printf("%d, %d\n", sizeof(d), sizeof(&d));	    // 4
    */

    return 0;
}
