/*
문제 2
섭씨(Celcius) 온도를 입력하면 화씨(Fahrenheit) 온도를 반환하는 CelToFah라는 이름의 함수와
그 반대로 화씨 온도를 입력하면 섭씨 온도를 반환하는 FahToCel라는 이름의 함수를 정의하고
이 두 함수를 호출하는 예제를 완성해보자.참고로 섭씨와 화씨간 온도 변환의 공식은 다음과 같다.

Fah = 1.8 * Cel + 32
*/

#include	<stdio.h>

double CelToFah(double Cel);
double FahToCel(double Fah);

int main0922(void) {
	double cel = 30.5;
	double fah = CelToFah(cel);
	printf("cel=%f, fah=%f\n", cel, fah);

	cel = FahToCel(fah);
	printf("cel=%f, fah=%f\n", cel, fah);
	return 0;
}

double CelToFah(double Cel) {
	return 1.8 * Cel + 32;
}

double FahToCel(double Fah) {
	return (Fah - 32) / 1.8;
}