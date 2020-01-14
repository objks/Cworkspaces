package chap11.api;

import javax.swing.text.Position;

public class MainExam {

	public static void main(String[] args) {
		String str = "I have a dream";
		// charAt : 한 문자씩 접근 방법 제공(index 위치)
		for(int i =0; i < str.length(); i++)	{
			System.out.println(str.charAt(i));
		}
		int Position = str.indexOf("have");
		System.out.println("have 의 위치 = " + Position);
	}

}
