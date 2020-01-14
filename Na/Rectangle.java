package Na;

public class Rectangle extends Shape {

	public Rectangle() {
//		super("from Rectangle");
		System.out.println("Rectangle »ý¼ºÀÚ");
	}

	public static void main(String[] args) {
		Rectangle r= new Rectangle();
		System.out.println(r.getClass().getName());
	}

}
