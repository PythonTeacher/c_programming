#include <stdio.h>

#define ROW 6
#define COL 10

int main()
{
    char member[ROW][COL]={"유재석","박명수","정준하","정형돈","노홍철","하하"};
    int i;

    puts("<<무한도전 멤버 출력>>");
    for(i=0; i<ROW; i++)
    {
        puts(member[i]);
    }

    return 0;
}
