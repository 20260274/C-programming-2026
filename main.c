#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void exerc1(void) {
	double inch, cm;
	scanf("%lf", &inch);
	cm = inch * 2.54;
	printf("%lf inch는 %lf cm입니다.\n", inch, cm);
}

void exerc2(void) {
	double C, F;
	scanf("%lf", &C);
	F = (C * 1.8) + 32;
	printf("섭씨 %lf 도는 화씨 %lf 입니다.", F, C);
}

void exerc3(void){
	double r, area;
	scanf("%lf", &r);
	area = r * r * 3.14;
	printf("반지름 %lf인 원의 넓이는 %lf입니다.", r, area);
}

void exerc4(void) {
	int total = 7384;

	int hours = total / 3600;
	int minutes = (total % 3600) / 60;
	int seconds = total % 60;

	printf("%d시간 %d분 %d초\n", hours, minutes, seconds);

}

void exerc5(void) {
	int score = 75;
	int attendance = 85;

	int passed = (score >= 60 && attendance >= 80);
	printf("1");
	

}

void exerc6(void) {
	int year;

	scanf("%d", &year);

	printf("%d\n", year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));

	return 0;

}


int main()
{
	
	exerc6();

	

}
/*{
	double inch,cm;
	double F, C;
	double r, area;

	scanf("%lf", &inch);
	cm = inch * 2.54;
	printf("%lf inch는 %lf cm입니다.\n", inch, cm);

	scanf("%lf", &C);
	F = (C * 1.8) + 32;
	printf("섭씨 %lf 도는 화씨 %lf cm입니다.", F, C);

	scanf("%lf", &r);
	area = r * r * 3.14;
	printf("반지름 %lf인 원의 넓이는 %lf입니다.",r,area);

	return 0;
	}

*/