package chap06.problem18;

public class ShopserviceExam {

	public static void main(String[] args) {
		ShopService obj1 = ShopService.getInstance();
		ShopService obj2 = ShopService.getInstance();
		
		if(obj1 == obj2) {
			System.out.println("같은 ShopService 객체 이다.");
		} else {
			System.out.println("다른 ShopService 객체 이다.");
		}
	}

}
