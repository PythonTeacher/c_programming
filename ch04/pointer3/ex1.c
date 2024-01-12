#include <stdio.h>

void printArray(int *p);
void swap(int *p);

int main()
{
    int array[2] = {10, 20};

    puts("<< swap Àü >>");
    printArray(array);

    swap(array);

    puts("<< swap ÈÄ >>");
    printArray(array);

    return 0;
}

void printArray(int *p)     // int p[]
{
    int i;
    for(i=0; i<2; i++)
        printf("%d\n", p[i]);
}

void swap(int *p)
{
    int temp;
    temp = p[0];    // temp = *p
    p[0] = p[1];    // *p = *(p+1)
    p[1] = temp;    // *(p+1) = temp
}







