#include <stdio.h>

int main()
{
    int arr[5] = {5,3,4,1,2};
    int *p = arr;

    printf("%d ", *p);         // 5
    printf("%d ", arr[1]);     // 3
    p+=2;
    printf("%d ", p[0]);       // 4
    printf("%d ", *(p+1));     // 1
    printf("%d ", *(arr+4));     //2

    return 0;
}
