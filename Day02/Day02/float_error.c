#include	<stdio.h>

int main_float(void) {
	int i;
	float num = 0.0f;	// 0.0(double), 0.0f(float)

	for (i = 0; i < 100; i++) {
		num += 0.1f;	// 0.1f(float)
	}
	printf("0.1을 100번 더한 결과: %f\n", num);	// %f : 실수(float)

	double num2 = 0.0;	// 0.0(double), 0.0f(float)

	for (i = 0; i < 100; i++) {
		num2 += 0.1;	// 0.1(double)
	}
	printf("0.1을 100번 더한 결과: %f\n", num2);	// %f : 실수(float)
	return 0;
}