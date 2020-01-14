package study.chap08_interface_review_interface;

public interface IChildDatabaseo extends IDatabase {
	@Override
	default void update(int balance) {
		System.out.println("IChildDatabaseo:update() »£√‚µ ");
	}
}
