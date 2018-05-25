#include<iostream>
struct qNode
{
	int data;
	qNode *next;
};

struct queue
{
	qNode *front,*rear;
};

qNode* newNode(int data)
{
	qNode* temp = new qNode();
	temp->data = data;
	temp->next = NULL;
}


void push(queue* q,int data)
{
	qNode* temp = newNode(data);
	if(!q->rear)
	{
		q->front = q->rear = temp;
		return;
	}
	q->rear->next = temp;
	q->rear = temp;
}

int pop(queue* q)
{
	if(!q->front)
		return 0;
	qNode* temp = q->front;
	q->front = q->front->next;
	if(!q->front)
		q->rear = NULL;
	int data = temp->data;
	delete(temp);
	return data;
}

queue* CreateQueue()
{
	queue* temp = new queue();
	temp->front = NULL;
	temp->rear = NULL;
	return temp;
}

