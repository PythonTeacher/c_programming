#include <stdio.h>

void func1(int n);
void func2(int *p);
void func3(int *p);

int main()
{
    int num=10;
    int array[5] = {1,2,3,4,5};
    int i;

    // call-by-value
    func1(num);
    printf("num : %d\n", num);

    // call-by-reference
    func2(&num);
    printf("num : %d\n", num);

    // call-by-reference
    func3(array);
    for(i=0; i<5; i++)
        printf("array[%d] : %d\n", i, array[i]);

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

// int -> int, int [5] -> int [5]
void func3(int p[])        // int *p
{
    int i;
    for(i=0; i<5; i++)
    {
        p[i] = p[i] * 2;
        //*(p+i) = *(p+i) * 2;
    }
}





