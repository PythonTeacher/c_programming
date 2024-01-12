#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *ifp, *ofp;
    int ch;

    if(argc < 3)
    {
        puts("명령 구문이 올바르지 않습니다.");
        return 1;
    }

    ifp = fopen(argv[1], "rb");
    if(ifp == NULL)
    {
        puts("지정된 파일을 찾을 수 없습니다.");
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

    puts("파일 복사가 성공했습니다");

    fclose(ifp);
    fclose(ofp);

    return 0;
}
