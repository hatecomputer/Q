#include <stdio.h>
#include <stdlib.h>
#define Q_SIZE 10

typedef struct {
	char que[Q_SIZE];
	int front, rear;
}QueType;

QueType* createQue() {
	QueType* cQ;
	cQ = (QueType*)malloc(sizeof(QueType));
	cQ->front = 0;
	cQ->rear = 0;
	return cQ;
}

int isEmpty(QueType* cQ) {
	if(cQ->front == cQ->rear)
		return 1;
	else
		return 0;
}

int isFull(QueType* cQ) {
	if (cQ->front == (cQ->rear + 1) % Q_SIZE)
		return 1;
	else
		return 0;
}

void enQue(QueType* cQ,char value) {
	if (isFull(cQ))
		printf("IS FULL!! \n");
	else {
		cQ->rear = (cQ->rear + 1) % Q_SIZE;
		cQ->que[cQ->rear] = value;
	}
}

char deQue(QueType* cQ) {
	if (isEmpty(cQ)) {
		printf("IS EMPTY!!\n");
	}
	else {
		cQ->front = (cQ->front + 1) % Q_SIZE;
		return cQ->que[cQ->front];
	}
}

void printQ(QueType* cQ) {
	int i, first,last;
	first = (cQ->front + 1 ) % Q_SIZE;
	last = (cQ->rear + 1 ) % Q_SIZE;
	if (isEmpty(cQ))
		printf("IS EMPTY!!\n");
	else {
		for (i = first; i < last; i++) {
			printf("%c ", cQ->que[i]);
		}
		printf("\n");
	}
}

void main() {
	QueType* cQ = createQue();
	char value;
	printQ(cQ);
	enQue(cQ, 'A'); printQ(cQ);
	enQue(cQ, 'B'); printQ(cQ);
	enQue(cQ, 'C'); printQ(cQ);
	
	value = deQue(cQ); printf("%c\n",value); printQ(cQ);
	value=deQue(cQ); printf("%c\n", value); printQ(cQ);
	value=deQue(cQ); printf("%c\n", value); printQ(cQ);
}