#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p;
    int i;

    for(i=0; i<1000000; i++)
    {
        p = (int *)malloc(1000000);
        free(p);
    }

    return 0;
}
