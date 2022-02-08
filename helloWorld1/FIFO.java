package helloWorld1;

public class FIFO {
	public static void main(String[] args) {
		Que cQ = new Que(100);
		
		cQ.deQue();
		cQ.enQue(5);
		System.out.println("value(en): " + cQ.peek());
		System.out.println("value: " + cQ.deQue());
		System.out.println("value(en): " + cQ.peek());
	}
}
