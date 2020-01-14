package study04;

public class Exer4_4 {
	public static void main(String[] args) {
		int num1=0;
		int num2=0;
		while(num1+num2!=5){
			num1=(int)(Math.random()*6) + 1;
			num2=(int)(Math.random()*6)+1;
			System.out.println(num1+ "," +num2);
		}
		System.out.println("-----------내가 한거");

		for(num1=1;num1<7;num1++){
			for(num2=1;num2<7;num2++){
				if(num1+num2==5){
					System.out.println(num1+"," +num2);
				}
			}
		}
		System.out.println("-----------내가 한거2");
		for(num1=1;num1<7;num1++){
			for(num2=1;num2<7;num2++){
				if(num1+num2==5){
					num1=(int)(Math.random()*6) + 1;
					num2=(int)(Math.random()*6)+1;
					System.out.println(num1+ "," +num2);
			
				}
			}
		}
			
		
	}
}

