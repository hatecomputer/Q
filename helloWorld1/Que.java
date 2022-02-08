package helloWorld1;

public class Que {
	int front;
	int rear;
	int max;
	Object[] cQ;
	
	Que(int max) {
		this.front = -1;
		this.rear = -1;
		this.max = max;
		cQ = new Object[this.max];
	}
	
	public boolean isFull() {
		return (this.front == (this.rear + 1)%max);
	}
	
	public boolean isEmpty() {
		return (this.front == this.rear);
	}
	
	public void enQue(Object value) {
		if(isFull()) {
			System.out.println("IS FULL!");
		}
		else {
			this.rear = (this.rear+1) % max;
			cQ[this.rear] = value;
		}
	}
	
	public Object deQue() {
		if(isEmpty()) {
			System.out.println("IS EMPTY!!");
			return null;
		}
		else {
			this.front = (this.front+1) % max;
			return cQ[front];
		}
	}
	
	public Object peek() {
		if(isEmpty()) {
			System.out.println("IS EMPTY!!");
			return null;
		}
		else {
			return cQ[front+1];
		}
	}
}
