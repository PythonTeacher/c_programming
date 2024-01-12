#include <stdio.h>

struct point
{
    int x, y;
};

struct time
{
    int hour;
    int minute;
    int second;
};

struct book
{
    char title[100];
    char author[100];
    char publisher[100];
    int price;
};

int main()
{
    struct point p;
    struct time t;
    struct book b;

    return 0;
}

