/*
명시적(강제적) 형변환
*/

#include	<stdio.h>

int main(void) {
	int math = 91;
	int eng = 100;

	int sum = math + eng;
	// 방법 1
	double avg = sum / 2.0;	// double 결과를 얻기 위해 둘 중의
							// 하나를 double로 변경(2->2.0)
		// sum : int -> double 자동형변환

	// 방법 2
	double avg2 = (double)sum / 2;	// 강제형변환 : sum _> double
	printf("평균 : %f\n", avg);
	printf("평균 : %f\n", avg2);
	return 0;
}