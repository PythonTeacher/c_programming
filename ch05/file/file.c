#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *ptr_arr[100][2];
    char *str[100]={0};
    int cnt=0, i;

    // 파일 오픈하기
    FILE* ifp = fopen("word.txt", "r");

    // 단어 읽기
    while(fgets(str, sizeof(str), ifp) != NULL)
    {
        // 파일에서 읽어온 단어 크기만큼 동적할당
        ptr_arr[cnt][0] = malloc(strlen(str) + 1);
        strcpy(ptr_arr[cnt][0], str);     // 단어 복사

        // 단어 의미 읽기
        if(fgets(str, sizeof(str), ifp) == NULL) break;

        // 파일에서 읽어온 단어의미 크기만큼 동적할당
        ptr_arr[cnt][1] = malloc(strlen(str) + 1);
        strcpy(ptr_arr[cnt][1], str);     // 단어의미 복사
        cnt++;
    }

    // 단어, 단어의미 출력
    for(i=0; i<cnt; i++)
    {
        printf("단어 : %s", ptr_arr[i][0]);
        printf("의미 : %s\n", ptr_arr[i][1]);
    }

    fclose(ifp);
	return 0;
}
