package study.chap08_interface_review_interface;

public class IChildDatabaseaImpl implements IChildDatabasea {

	@Override
	public void insert(String sql) {
		// TODO Auto-generated method stub

	}

	@Override
	public void select(String sql) {
		// TODO Auto-generated method stub

	}

	// 추상메소드로 변경을 했으므로 꼭 재정의를 해주어야 함
	@Override
	public void update(int balance) {
		// TODO Auto-generated method stub

	}

}
