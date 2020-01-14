package chap05;

public class ArrayExample {
	
	// C언어 int main(void) : 입력 파라미터가 없을 때
	// 	   int main(int argc, char* argv[])
	// 자바 main(String[] args) : String 배열이므로 length를 포함 -> int argc
	
	public static void main(String[] args) {
		// C 언어
		// int arr[4];
		// 자바 : 배열 -> 객체(Class)-> 인스턴스화(객체를 생성): 메모리를 할당
		int[] arr1 = new int[4]; // new : 객체를 생성하기 위한 생성자를 호출하는 용도
		// arr1 : 참조 변수(주소를 저장)
		int[] arr2 = null;
		// arr2[2]=10;
		arr1[2] = 20;
		System.out.println("arr1[2] = " + arr1[2]);

		double darr[] = new double[10]; // 배열을 생성
		for (int i = 0; i < 10; i++) {
			darr[i] = 0.1;
		}
		for (int i = 0; i < 10; i++) {
			System.out.println("darr[" + i + "] =" + darr[i]);
		}

		String str1 = "홍길동"; // 변경 불가 : 프로그램의 일부
		String str3 = "홍길동";
		String str2 = new String("홍길동"); // 변경 가능
		str2.replace("이방원", "홍길동");
		System.out.println(str2);

		// C 언어
		int nArr[] = { 1, 2, 3, 4, 5 }; // Heap 영역에 int 5개가 할당이 되고 값이 들어감
		int aarr[] = new int[10]; // 객체 생성을하면 초기값으로 0이 저자됨 : 생성자에서
		for (int i = 0; i < nArr.length; i++) {
			System.out.print(nArr[i]);
		}
	}
}
