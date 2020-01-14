package chap06.getter;

public class Member {
	private String id;
	private String name;
	private String pw;
	private String phone;
	private String email;
	private boolean gender;// getter setter	
	
	public boolean isGender() {
		return gender;
	}

	public void setGender(boolean gender) {
		this.gender = gender;
	}
	
	public Member() {
		
	}

	// 생성자
	public Member(String id, String name, String pw, String phone, String email) {
	super();
	this.id = id;
	this.name = name;
	this.pw = pw;
	this.phone = phone;
	this.email = email;	
}
	
	// getter setter
	public String getId() {
		return id;
	}

	public void setId(String id) {	// 영문, 숫자의 조합으로 7자 이상
		if(id.length() < 7)
			System.out.println("7자 이상 입력하라");
		// 정규표현식을 사용해서 파라미터가 규칙대로 입력되었는지 확인한 후 통과되면 저장
		// 그렇지 않으면 저장하지 않고 잘못된 점을 알려준다.
		this.id = id;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public String getPw() {
		return pw;
	}

	public void setPw(String pw) {
		this.pw = pw;
	}

	public String getPhone() {
		return phone;
	}

	public void setPhone(String phone) {
		this.phone = phone;
	}

	public String getEmail() {
		return email;
	}

	public void setEmail(String email) {
		this.email = email;
	}


	}
