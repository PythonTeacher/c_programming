#include <stdio.h>

int main()
{
    FILE *ifp, *ofp;

    ifp = fopen("input.txt", "r");
    if(ifp == NULL)
    {
        ifp = fopen("input.txt", "w+");

    }
    puts("input.txt file open!!!");
    // read�۾� ����

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
