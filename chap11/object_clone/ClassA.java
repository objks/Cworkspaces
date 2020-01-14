package chap11.object_clone;

import java.util.Arrays;

// 객체 복사하려면 인터페이스 Cloneable 구현해야 함
public class ClassA implements Cloneable {
	// 필드
	int num;
	int arr[];
	
	public ClassA (int num, int arr[]) {
		this.num = num;
		this.arr = arr;
	}
	
	public ClassA getObject() {
		ClassA a = null;
		try {
			a = (ClassA)clone();	// 재정의를 하면 재정의한 메소드가 호출됨
		} catch(CloneNotSupportedException e) {			
		}
		return a;
	}
	
	@Override
	protected Object clone() throws CloneNotSupportedException {
		// ClassA의 복사 방법을 재정의
		// 얖은 복사 , 깊은복사를 선택해서 재정의 해준다.
//		int newArr[] = new int [arr.length];
		ClassA classA = (ClassA)super.clone();
		classA.arr = Arrays.copyOf(arr, arr.length);
		
		return classA;	// Object 클래스의 clone() 메소드를 호출
	}
}
