package chap05;
/*
 * 배열 단점 : 한번 크기를 정해서 생성을 하면 크기가 고정
 * 데이터를 더 저장하고 싶을 경우 새로운 크기의 배열을 생성
 * 이전에 저장된  데이터를 재사용 -> 복사
 * System.arraycopy
 * */
public class ArrayCopy {

	public static void main(String[] args) {
		int arr1[] ={2,4,6,8};	// 길이 4
		int arr2[] = new int[10];
		// 복사 : 이전 데이터를 재사용
		
		/*// 반복문을 사용해서 복사
		for(int i=0;i<arr1.length;i++) {
			arr2[i] = arr1[i]
		}
		arr2[4]=10;
		*/
		System.arraycopy(arr1, 0, arr2, 0, arr1.length);
		arr2[4]=10;
		for(int i=1;i<arr2.length;i++){
			System.out.println("arr2[" + i + "]=" + arr2[i]); 
		}
	}
}
