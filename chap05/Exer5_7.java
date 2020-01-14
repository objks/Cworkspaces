package chap05;

public class Exer5_7 {

	public static void main(String[] args) {
		int max=0;
		int[] array={1,5,3,8,2};
		
		// 작성 위치 : for문
		for(int i=0; i < array.length; i++) {
			if(max <array[i]) {
				max=array[i];
			}			
		}		
		System.out.println("max : " + max);
		System.out.println();
		
		// 향상된 for문(enhanced for)
		for(int num : array) {
			if(max < num)
				max=num;
		}
		System.out.println("max : " + max);
	}

}
