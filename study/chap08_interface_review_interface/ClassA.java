package study.chap08_interface_review_interface;

public class ClassA {
	IDatabase db;	// 인터페이스 필드
	
	public ClassA(IDatabase db) {
		this.db = db;
	}
	
	public void insert() {
		db.insert("");
	}
	
	public void select() {
		db.select("");
	}
}
