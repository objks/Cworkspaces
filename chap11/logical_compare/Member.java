package chap11.logical_compare;

import javax.jws.soap.SOAPBinding;

public class Member {
	String id;
	String pw;
		
	public Member(String id, String pw) {
		this.id = id;
		this.pw = pw;
	}
	
	@Override
	public int hashCode() {
		return Integer.valueOf(pw);
	}
	
	@Override
	public boolean equals(Object obj) {
		Member m = (Member)obj;
		if(id.equals(m.id) && pw.equals(m.pw))
			return true;
		else 
			return false;
	}
	
	@Override
	public String toString() {
		return "id: " + id + ", pw: " + pw;
	}
	
}
