#include <stdio.h>

int main()
{
    FILE *ofp;
    char buf[100];

    if((ofp = fopen("output.txt", "a")) == NULL)
    {
        printf("output.txt ���� open error\n");
        return 1;
    }

    puts("<< �����ϴ� TV ���α׷� �Է� >>\n");

    while(fgets(buf, sizeof(buf), stdin) != NULL)
    {
        fputs(buf, ofp);
        printf("���� ��� �Ϸ� : %s\n", buf);
    }

    fclose(ofp);
    return 0;
}
