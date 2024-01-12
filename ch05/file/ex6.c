#include <stdio.h>
#include <string.h>

int main()
{
    FILE *ifp, *ofp;
    char name[100];
    int kor, eng, math, tot=0;

    ifp = fopen("input.txt", "r");
    ofp = fopen("output.txt", "w");

    if(ifp == NULL || ofp == NULL)
    {
        printf("���� open error\n");
        return 1;
    }

    fprintf(ofp, "-----------------------------------------------------\n");
    fprintf(ofp, " �̸�\t����\t����\t����\t����\t���\n");
    fprintf(ofp, "-----------------------------------------------------\n");

    while(fscanf(ifp, "%s %d %d %d", name, &kor, &eng, &math) != EOF)
    {
        tot = kor + eng + math;
        fprintf(ofp, "%s \t %d�� \t %d�� \t %d�� \t %d�� \t %.1f\n",
                name, kor, eng, math, tot, tot/3.0);
    }

    puts("File ���� ����!!!");

    fprintf(ofp, "-----------------------------------------------------\n");
    fclose(ifp);
    fclose(ofp);

    return 0;
}
