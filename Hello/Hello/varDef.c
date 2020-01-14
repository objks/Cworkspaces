#include	<stdio.h>

int main_varDef(void) {
	int var1 = 0;	// 초기화 오류 (프로그램에서 컴파일러가 체크하여 걸러낸 오류)
	// 변수 선언과 함께 초기화를 할 수도 있고
	int var2;	// 변수 선언 후
	var2 = 20;	// 어떤 목적으로 사용할 때 초기값을 할당
	int var3 = var2 + 30;	// 50이라는 값을 예측할 수 있음.
	int var4;	// 오류 -> 어떤 결과를 예측할 수 없다. 뭐하는지 모르고 있다.
	int var5 = var4 + 10;
	printf("var1 = %d\n", var1);	// 예상 출력값은? 쓰레기(뭔지 모른다)
	return 0;
}