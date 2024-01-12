#include <stdio.h>
#include <string.h>

int main()
{
    FILE *ifp, *ofp;
    char name[100];
    int kor, eng, math, tot=0;

    ifp = freopen("input.txt", "r", stdin);
    ofp = freopen("output.txt", "w", stdout);

    if(ifp == NULL || ofp == NULL)
    {
        printf("���� open error\n");
        return 1;
    }

    printf("-----------------------------------------------------\n");
    printf(" �̸�\t����\t����\t����\t����\t���\n");
    printf("-----------------------------------------------------\n");

    while(scanf("%s %d %d %d", name, &kor, &eng, &math) != EOF)
    {
        tot = kor + eng + math;
        printf("%s \t %d�� \t %d�� \t %d�� \t %d�� \t %.1f\n",
                name, kor, eng, math, tot, tot/3.0);
    }

    puts("File ���� ����!!!");

    printf("-----------------------------------------------------\n");
    fclose(ifp);
    fclose(ofp);

    return 0;
}
