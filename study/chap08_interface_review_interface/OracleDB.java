package study.chap08_interface_review_interface;

public class OracleDB implements IDatabase {

	@Override
	public void insert(String sql) {
		// JDBC ∂Û¿Ã∫Í∑Ø∏Æ SQL(INSERT INTO ...)
		System.out.println("OracleDB:insert() »£√‚µ ");
	}

	@Override
	public void select(String sql) {
		System.out.println("OracleDB:select() »£√‚µ ");
	}

	@Override
	public void update(int balance) {
		System.out.println("OracleDB:update() »£√‚µ ");
	}
}
