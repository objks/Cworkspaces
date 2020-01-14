/*
문제 3. 학생의 전체 평균점수에 대한 학점을 출력하는 프로그램을
	작성하자. 학생의 성적이 90점 이상이면 A, 80점 이상이면 B,
	70점 이상이면 C, 50점 이상이면 D 그리고 그 미만이면 F다!
	프로그램 실행 시 순서대로 국어, 영어, 수학 점수를 입력 받
	는다. 그리고는 평균을 구한 다음 그에 적절한 학점을 출력하면
	된다.
*/

#include	<stdio.h>

int main_080103(void) {
	// 국어, 영어, 수학 입력
	int kor, eng, math;
	printf("국어 : ");
	scanf("%d", &kor);
	printf("영어 : ");
	scanf("%d", &eng);
	printf("수학 : ");
	scanf("%d", &math);

	int total = kor + eng + math;
	int mean = total / 3;	// 정수 : 소수점은 무시
	double avg = (double)total / 3;	// 소수점까지

	if (mean >= 90) {
		printf("A\n");
	}
	else if (mean >= 80) {
		printf("B\n");
	}
	else if (mean >= 70) {
		printf("C\n");
	}
	else if (mean >= 50) {
		printf("D\n");
	}
	else {
		printf("F\n");
	}

	/* -> if보다는 else if를 사용하는게 효과적
	if (mean >= 90) {
		printf("A\n");
	}
	if (mean >= 80 && mean < 90) {
		printf("B\n");
	}
	*/
	
	return 0;
}