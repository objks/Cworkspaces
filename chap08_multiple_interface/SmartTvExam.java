package chap08_multiple_interface;

public class SmartTvExam {

	public static void main(String[] args) {
		SmartTv st = new SmartTv();
		SmartTv rc = new SmartTv();
		rc.turnOn();
		rc.setVolume(20);
//		rc.search();	불가능 (RemoteControl 타입)
		Searchable s = (Searchable)rc;	// 원래 생성한 것이 SmartTv이므로
		s.search("https://www.naver.com");
		rc.turnOff();
	}

}
