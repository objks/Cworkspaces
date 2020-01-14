package chap05;

public class AdvencedFor {

	public static void main(String[] args) {
		int arr[] = { 3, 6, 9, 12 };
		int sum = 0;
		for (int i = 0; i < arr.length; i++) {
			sum += arr[i];
		}
		System.out.println("합 = " + sum);

		// 향상된 for
		// {3,6,9,12)
		sum = 0;
		int i=0;
		for (int num : arr) {
			System.out.println(num);
			sum += num;
			i++;
		}
		System.out.println("합 = " + sum);
	}

}
