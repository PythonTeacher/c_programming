#include <stdio.h>

int main(){

	int year, hour,min,sec;
	double oneyear = 365.2422;
	double f_hour,f_min;

	year=(int)oneyear;
	f_hour=(oneyear-year)*24;
	hour=(int)f_hour;
	f_min=(f_hour-hour)*60;
	min=(int)f_min;
	sec=(f_min-min)*60;

	printf("1년은 %d일, %d시간, %d분, %d초입니다",year,hour,min,sec);

	return 0;

}
