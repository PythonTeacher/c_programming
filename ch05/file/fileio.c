#include <stdio.h>

int main()
{
    int score[5];       	// �ټ� ������ ������ ��� ���� �迭 ���� (�� 5���� ����)
                            // �迭 ��ҿ� ���� ���� ���� ��� score[0]=100, score[1]=90;���� ����
    int tot=0;  		    // ������ ��� ���� ����
    double avg;		// ����� ��� ���� ����
    int i=0;		// �ε��� ����
    int temp;		// ���Ϸκ��� �о���� ������ �����ϱ� ���� �ӽ� ����
    char str[100];

    // ���� �����ϱ�
    FILE* ifp = fopen("score.txt", "r");	// ���� ������ �ִ� score.txt ������ read ���� ����
    //FILE* ofp = fopen("score.txt", "a");	// score.txt ������ append ���� ����
					// ��w�� : write ���� ���� ���� ������ ����� ��
					// ��a�� : append ���� ���� ���� ���� �ڿ� ��

    /*while(fscanf(ifp, "%d", &temp) != EOF) // ������ ���� ��� EOF(End of File)�� ����
    {
        score[i++] = temp;
    }*/
    while(fgets(str, 100, ifp) != NULL)
    {
        puts(str);
    }

    // �ݺ����� �̿��� ���� ��� �� ���� ���
    /*for(i=0; i<5; i++)
    {
        printf("%d��° ���� : %d\n", i+1, score[i]);
        tot += score[i];
    }

    // ��� ���
    avg=tot/5.0;

    fprintf(ofp, "���� : %d��\n", tot);
    fprintf(ofp, "��� : %.1f��", avg);
*/
    fclose(ifp);
    //fclose(ofp);
	return 0;
}
