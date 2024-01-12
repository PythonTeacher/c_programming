#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *ifp, *ofp;
    int ch;

    if(argc < 3)
    {
        puts("��� ������ �ùٸ��� �ʽ��ϴ�.");
        return 1;
    }

    ifp = fopen(argv[1], "rb");
    if(ifp == NULL)
    {
        puts("������ ������ ã�� �� �����ϴ�.");
        return 1;
    }

    if((ofp = fopen(argv[2], "wb")) == NULL)
    {
        puts("file open error!!!");
        return 1;
    }

    while(1)
    {
        ch = fgetc(ifp);
        if(ch == EOF) break;
        //if(feof(ifp)) break;
        fputc(ch, ofp);
    }

    puts("���� ���簡 �����߽��ϴ�");

    fclose(ifp);
    fclose(ofp);

    return 0;
}
