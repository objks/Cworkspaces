package study.chap08_interface_review_interface;

public class MariaDB implements IDatabase {
	// ∏ﬁº“µÂ : CRUD
	@Override
	public void insert(String sql) {
		System.out.println("MariaDB:insert() »£√‚µ ");
	}
	
	@Override
	public void select(String sql) {
		System.out.println("MariaDB:select() »£√‚µ ");
	}
}
