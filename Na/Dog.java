package Na;

public class Dog extends Animal {
	protected void sound() {
		System.out.println("¸Û¸Û!");
	}
	
	
	public static void main(String[] args) {
		Dog d= new Dog();
		d.sound();
	}

}
