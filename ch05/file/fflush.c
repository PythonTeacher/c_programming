#include <stdio.h>

int main()
{
    int i;

    printf("12345");

    for(i=0; i>=0; i++);

    printf("67890\n");

    return 0;
}




















    /*char buf[80]={0};
    FILE *fp;
    fp = fopen("input.txt","r+");
    if(fp == NULL)
    {
        perror("Error opening file");
        return 1;
    }
    fputs ("test", fp);
    //fflush(fp);       -> Linux���� �׽�Ʈ �غ���
    rewind(fp); // ������ġ�� �̵�
    fgets(buf, sizeof(buf),fp);
    puts(buf);

    fclose(fp);*/
