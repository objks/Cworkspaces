package chap11.logical_compare;

public class MemberExam {

	public static void main(String[] args) {
   		Member m1 = new Member("ȫ�浿", "1234");
		Member m2 = new Member("ȫ�浿", "1234");
		
		if(m1.hashCode() == m2.hashCode()) {
			System.out.println("�ؽ��ڵ尪�� ������");
		} else {
			System.out.println("�ؽ��ڵ尪 �ٸ�");
		}
		
		if(m1.equals(m2)) {
			System.out.println("�����մϴ�");
		} else {
			System.out.println("�ٸ��ϴ�");
		}
		
		System.out.println(m1.toString());	// ��ü�� ������ ���
	}
}
