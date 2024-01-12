#include <stdio.h>

int main()
{
    FILE *ifp, *ofp;

    ifp = fopen("input.txt", "r");
    if(ifp == NULL)
    {
        puts("file not exist!!!");
        return 1;
    }
    puts("input.txt file open!!!");

    ofp = fopen("output.txt", "w");
    if(ofp == NULL)
    {
        puts("file open error!!!");
        return 1;
    }
    puts("output.txt file open!!!");

    fclose(ifp);
    fclose(ofp);
    return 0;
}
