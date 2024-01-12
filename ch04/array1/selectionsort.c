#include <stdio.h>

int main() {
    int A[5] = {66, 84, 79, 93, 48};
    int i, j, min, temp;
    for(i=0; i<4; i++)
    {
        min=i;
        for(j=i+1; j<5; j++)
        {
            if(A[min] > A[j])
                min=j;
        }
        temp=A[min];
        A[min]=A[i];
        A[i]=temp;
    }

    for(i=0; i<5; i++)
        printf("%d ", A[i]);

    return 0;
}
