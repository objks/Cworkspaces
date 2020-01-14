package study.chap08_interface_review_interface;

public interface IChildDatabasea extends IDatabase {
	// default 메소드를 추상메소드로 변경
	void update(int balance);
}
