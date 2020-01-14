#include	<stdio.h>
/*
typedef struct {
	int mem1;		// 4
	int mem2;		// 4
	double mem3;	// 8
} Struct;			// 4 + 4 + 8 = 16 (서로 독립적인 데이터 저장)


typedef union {		// 공용체
	struct ddd {
		int high;	// 4
		int low;	// 4
	} mem2;				// 8
	double mem3;	// 8
} Union;			// 8
*/
typedef union {		// 공용체
	struct ddd {
		short high;	// 2
		short low;	// 2
	} mem2;			// 4
	int mem3;	// 4
} Union2;

/*
struct aaa {
	int high;	// 4
	int dummy;
	double low;	// 8
};


typedef union {		// 공용체
	struct aaa ccc;				// 16
	double mem3;	// 8
} Union3;			// 12


struct bbb {
	char a;		// 1
	char b;	//4
	char dummy[2];
	int num;	// 4
};
*/

int main(void) {
	/*
	printf("구조체 Struct의 메모리 크기 = %d\n", sizeof(Struct));	// 16
	printf("공용체 Union의 메모리 크기 = %d\n", sizeof(Union));		// 8
	printf("크기 = %d\n", sizeof(struct bbb));
	*/
	/*
	Union u1;
	u1.mem3 = 12.3;	// mem3 : double
	printf("double mem3 = %f\n", u1.mem3);
	printf("high = %d, low = %d\n", u1.mem2.high, u1.mem2.low);
	*/
	Union2 u2;
	u2.mem3 = 0x00111100;
	printf("%x\n", u2.mem3);
	printf("high = %x, low = %x\n", u2.mem2.high, u2.mem2.low);
	return 0;
}