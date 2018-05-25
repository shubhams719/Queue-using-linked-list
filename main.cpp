#include<iostream>
#include "queue.h"
int main()
{
	queue* q = CreateQueue();
	push(q,1);
	push(q,2);
	push(q,3);
	push(q,4);
	std::cout <<pop(q) << " ";
	std::cout <<pop(q) << " ";
	std::cout <<pop(q) << " ";
	return 0;
}
