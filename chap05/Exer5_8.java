package chap05;

public class Exer5_8 {

	public static void main(String[] args) {
		int[][] array = { { 95, 86 }, 
						  { 83, 92, 96 }, 
						  { 78, 83, 93, 87, 88 } };

		int sum = 0;
		double avg = 0.0;
		int count = 0;
		
		// 행에 대하여 반복
		for (int i = 0; i < array.length; i++) {	// 행에 대하여 : i(행) 0~2
			count+=array[i].length;
			for (int j = 0; j < array[i].length; j++) {	// 행에 대한 열 : j array
				// i = 0, j : 0~1 array[0].length=2
				// i = 1, j : array[1].length=3 0~2
				// i = 2, j : array[2].length=3 0~2
				sum += array[i][j];				
			}			
		}		
		avg= (double)sum/count;

		System.out.println("sum : " + sum);
		System.out.println("avg : " + avg);
	}

}
