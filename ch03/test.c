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

	printf("1���� %d��, %d�ð�, %d��, %d���Դϴ�",year,hour,min,sec);

	return 0;

}
