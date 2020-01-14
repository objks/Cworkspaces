package chap11.object_clone;

import java.util.Arrays;

// ��ü �����Ϸ��� �������̽� Cloneable �����ؾ� ��
public class ClassA implements Cloneable {
	// �ʵ�
	int num;
	int arr[];
	
	public ClassA (int num, int arr[]) {
		this.num = num;
		this.arr = arr;
	}
	
	public ClassA getObject() {
		ClassA a = null;
		try {
			a = (ClassA)clone();	// �����Ǹ� �ϸ� �������� �޼ҵ尡 ȣ���
		} catch(CloneNotSupportedException e) {			
		}
		return a;
	}
	
	@Override
	protected Object clone() throws CloneNotSupportedException {
		// ClassA�� ���� ����� ������
		// �A�� ���� , �������縦 �����ؼ� ������ ���ش�.
//		int newArr[] = new int [arr.length];
		ClassA classA = (ClassA)super.clone();
		classA.arr = Arrays.copyOf(arr, arr.length);
		
		return classA;	// Object Ŭ������ clone() �޼ҵ带 ȣ��
	}
}
