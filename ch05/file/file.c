#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *ptr_arr[100][2];
    char *str[100]={0};
    int cnt=0, i;

    // ���� �����ϱ�
    FILE* ifp = fopen("word.txt", "r");

    // �ܾ� �б�
    while(fgets(str, sizeof(str), ifp) != NULL)
    {
        // ���Ͽ��� �о�� �ܾ� ũ�⸸ŭ �����Ҵ�
        ptr_arr[cnt][0] = malloc(strlen(str) + 1);
        strcpy(ptr_arr[cnt][0], str);     // �ܾ� ����

        // �ܾ� �ǹ� �б�
        if(fgets(str, sizeof(str), ifp) == NULL) break;

        // ���Ͽ��� �о�� �ܾ��ǹ� ũ�⸸ŭ �����Ҵ�
        ptr_arr[cnt][1] = malloc(strlen(str) + 1);
        strcpy(ptr_arr[cnt][1], str);     // �ܾ��ǹ� ����
        cnt++;
    }

    // �ܾ�, �ܾ��ǹ� ���
    for(i=0; i<cnt; i++)
    {
        printf("�ܾ� : %s", ptr_arr[i][0]);
        printf("�ǹ� : %s\n", ptr_arr[i][1]);
    }

    fclose(ifp);
	return 0;
}
