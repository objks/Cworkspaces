package study.chap08_interface_review_interface;

public class MSsql implements IDatabase {

	@Override
	public void insert(String sql) {
		System.out.println("MSsql:insert()");
	}

	@Override
	public void select(String sql) {
		System.out.println("MSsql:select()");
	}

}
