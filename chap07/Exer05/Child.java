package chap07.Exer05;

public class Child extends Parent {
	private int studentNo;
	
	public Child(String name, int studentNo) {
		super(name);			// 부모 Parent의 디폴트 생성자를 호출
		this.name = name;
		this.studentNo = studentNo;
	}

}
