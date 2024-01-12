#include <stdio.h>
#include <time.h>

int main()
{
    int i;
    clock_t start_time, end_time;      // clock_t

    start_time = clock();              // Start_Time

    for(i=0; i>=0; i++);

    end_time = clock();                // End_Time

    // CLOCKS_PER_SEC : 1000
    printf("Time : %f\n", ((double)(end_time-start_time)) / CLOCKS_PER_SEC);

    return 0;
}
