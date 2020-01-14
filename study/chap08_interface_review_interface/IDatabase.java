package study.chap08_interface_review_interface;

public interface IDatabase {
	// 추상 메소드
	void insert(String sql);
	void select(String sql);
	// 새로운 추가
	// 방법 1. -> 구현객체가 모두 수정이 되어야 함.
//	void update(int balance);
	
	// 방법 2.
	default void update(int balance) {
		System.out.println("update() 호출됨");
	}
}
