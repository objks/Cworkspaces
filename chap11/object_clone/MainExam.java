package chap11.object_clone;

public class MainExam {

	public static void main(String[] args) {
		
		long startTime = System.currentTimeMillis();
		long startNano = System.nanoTime();
		ClassA c1 = new ClassA(8, new int[] {5, 10} );
		System.out.println(c1.num);
		for(int i=0; i < c1.arr.length; i++) {
			System.out.println("arr[" + i + "] = "+ c1.arr[i]);
		}
		ClassA c2 = c1.getObject();
		System.out.println(c2.num);
		for(int i=0; i < c2.arr.length; i++) {
			System.out.println("arr[" + i + "] = "+ c2.arr[i]);
		}
		c1.num=20;
		c1.arr[0] = 9;
		System.out.println(c1.num);
		System.out.println(c2.num);
		System.out.println(c1.arr[0]);
		System.out.println(c2.arr[0]);
		
		System.out.println(System.currentTimeMillis());	// 1970.1.1 이후의 시간
		long endTime = System.currentTimeMillis();
		long endNano = System.nanoTime();
		System.out.println("소요시간 : " + (endTime - startTime));
		System.out.println("소요시간 : " + (endNano - startNano));
	}

}
