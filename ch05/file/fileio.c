#include <stdio.h>

int main()
{
    int score[5];       	// 다섯 과목의 점수를 담기 위한 배열 선언 (방 5개로 구성)
                            // 배열 요소에 값을 직접 넣을 경우 score[0]=100, score[1]=90;으로 넣음
    int tot=0;  		    // 총점을 담기 위한 변수
    double avg;		// 평균을 담기 위한 변수
    int i=0;		// 인덱스 변수
    int temp;		// 파일로부터 읽어들인 점수를 저장하기 위한 임시 변수
    char str[100];

    // 파일 오픈하기
    FILE* ifp = fopen("score.txt", "r");	// 같은 폴더에 있는 score.txt 파일을 read 모드로 오픈
    //FILE* ofp = fopen("score.txt", "a");	// score.txt 파일을 append 모드로 오픈
					// “w” : write 모드는 기존 파일 내용을 지우고 씀
					// “a” : append 모드는 기존 파일 내용 뒤에 씀

    /*while(fscanf(ifp, "%d", &temp) != EOF) // 파일의 끝인 경우 EOF(End of File)를 리턴
    {
        score[i++] = temp;
    }*/
    while(fgets(str, 100, ifp) != NULL)
    {
        puts(str);
    }

    // 반복문을 이용한 점수 출력 및 총점 계산
    /*for(i=0; i<5; i++)
    {
        printf("%d번째 점수 : %d\n", i+1, score[i]);
        tot += score[i];
    }

    // 평균 계산
    avg=tot/5.0;

    fprintf(ofp, "총점 : %d점\n", tot);
    fprintf(ofp, "평균 : %.1f점", avg);
*/
    fclose(ifp);
    //fclose(ofp);
	return 0;
}
