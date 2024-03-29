#include <stdio.h>
#include <stdlib.h>

/** 시간 구하기 (구조체) **/

typedef struct rec
{
    int i;
    float PI;
    char A;
}RECORD;

int main()
{
    RECORD *ptr_one;

    ptr_one = (RECORD *) malloc (sizeof(RECORD));

    (*ptr_one).i = 10;
    (*ptr_one).PI = 3.14;
    (*ptr_one).A = 'a';

    printf("First value: %d\n",(*ptr_one).i);
    printf("Second value: %f\n", (*ptr_one).PI);
    printf("Third value: %c\n", (*ptr_one).A);

    ptr_one->i = 20;
    ptr_one->PI = 6.14;
    ptr_one->A = 'b';

    printf("First value: %d\n", ptr_one->i);
    printf("Second value: %f\n", ptr_one->PI);
    printf("Third value: %c\n", ptr_one->A);

    free(ptr_one);

    return 0;
}
