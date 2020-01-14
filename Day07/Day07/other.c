// other.c 파일에서 global.c에 선언된
// num을 사용하고 싶다.
extern int num;	// extern : 다른 파일에 num 변수가 존재한다.
// extern static int total;	// static은 불가

void callFuncTwo() {
	int var2 = num + 60;	// num? -> extern을 사용해서 존재를 알린다.
//	int var3 = total - 40;	// total은 접근 불가능
}