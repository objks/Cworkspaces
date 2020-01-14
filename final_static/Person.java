package final_static;

public class Person {
	public static final int MAX_PAGE = 10;
	
	final String nation ="Korea";
	final String ssn;
	String name;
	
	public Person(String ssn, String name) {
		this.ssn = ssn;
		this.name = name;		
	}
	
}
