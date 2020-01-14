package chap06.class_review2;

public class CommonData {
	private static final int MAX_MEMBER = 200;
	private static CommonData instance = new CommonData();
	// 싱글톤
	private CommonData() { }
	
	public static CommonData getInstance() {
		return instance;
	}
	// 저장하고 싶은 데이터 ...
	Member data[] = new Member[MAX_MEMBER];
	int count = 0;	// 회원 수
}
