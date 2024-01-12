#include <stdio.h>

void sort(char **ideal);
void print(char **ideal);

int main()
{
    char *ideal[5] = {"조인성", "조승우", "조형기",
                      "콜린퍼스", "베네딕트 컴버배치"};

    sort(ideal);        // 포인터배열명을 인자로 넘기면

    print(ideal);

    return 0;
}

// int a[10];
// func(a);
// void func(int *p)        // int p[], int p[0], p[10000]
void sort(char **ideal)     // 이중포인터변수로 받는다!!!
{
    int i, j;
    char *temp;

    for(i=0; i<4; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(strcmp(ideal[i], ideal[j]) > 0)
            {
                temp = ideal[i];
                ideal[i] = ideal[j];
                ideal[j] = temp;
            }
        }
    }
}

void print(char **ideal)
{
    int i;
    puts("<< 좋아하는 인물 >>");
    for(i=0; i<5; i++)
        puts(ideal[i]);
}










