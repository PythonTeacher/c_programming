#include <stdio.h>

void func1(int n);
void func2(int *p);
void func3(int array[]);

int main()
{
    int num=10;
    int array[5] = {1,2,3,4,5};
    int i;

    // call by value
    func1(num);
    printf("num : %d\n", num);

    // call by reference
    func2(&num);
    printf("num : %d\n", num);

    func3(array);
    for(i=0; i<5; i++)
    {
        printf("array[%d] : %d\n", i, array[i]);
    }

    return 0;
}

void func1(int n)
{
    n = n * 2;
}

void func2(int *p)
{
    *p = *p * 2;
}

void func3(int array[])     // int *array
{
    int i;
    for(i=0; i<5; i++)
    {
        //array[i] = array[i] * 2;
        *(array+i) = *(array+i) * 2;
    }
}
