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
        printf("파일 open error\n");
        return 1;
    }

    printf("-----------------------------------------------------\n");
    printf(" 이름\t국어\t영어\t수학\t총점\t평균\n");
    printf("-----------------------------------------------------\n");

    while(scanf("%s %d %d %d", name, &kor, &eng, &math) != EOF)
    {
        tot = kor + eng + math;
        printf("%s \t %d점 \t %d점 \t %d점 \t %d점 \t %.1f\n",
                name, kor, eng, math, tot, tot/3.0);
    }

    puts("File 생성 성공!!!");

    printf("-----------------------------------------------------\n");
    fclose(ifp);
    fclose(ofp);

    return 0;
}
