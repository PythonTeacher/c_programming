#include <stdio.h>
#include <string.h>

int main()
{
    char member[6][10];
    int age[6];
    char tempStr[10];
    int i, j, temp;

    for(i=0; i<6; i++)
    {
        printf("%d번째 멤버명을 입력하세요 => ", i+1);
        gets(member[i]);

        printf("%s의 나이를 입력하세요 => ", member[i]);
        scanf("%d", &age[i]);
        while(getchar() != '\n');       // 엔터키 없애주기

        printf("\n");
    }

    printf("\n<< 나이 기준 정렬 전 >>\n");
    printf("--------------------------\n");
    printf("멤버명 \t 나이\n");
    printf("--------------------------\n");
    for(i=0; i<6; i++)
    {
        printf("%s \t %d세\n", member[i], age[i]);
    }
    printf("--------------------------\n");

    // 버블 정렬 (내림차순)
    for(i=1; i<6; i++)
    {
        for(j=0; j<6-i; j++)
        {
            if(age[j] < age[j+1])
            {
                // 나이순 정렬
                temp = age[j];
                age[j] = age[j+1];
                age[j+1] = temp;

                // 이름 정렬
                strcpy(tempStr, member[j]);
                strcpy(member[j], member[j+1]);
                strcpy(member[j+1], tempStr);
            }
        }
    }

    printf("\n<< 나이 기준 정렬 후 >>\n");
    printf("--------------------------\n");
    printf("멤버명 \t 나이\n");
    printf("--------------------------\n");
    for(i=0; i<6; i++)
    {
        printf("%s \t %d세\n", member[i], age[i]);
    }
    printf("--------------------------\n");

    return 0;
}
