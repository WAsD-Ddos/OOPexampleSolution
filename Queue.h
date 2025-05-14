#include "maint.h"
class Queue
{
private:
	int* queue;
	int size;
public:

	Queue();
	~Queue();
	void enqueue(int element);
	int dequeue();
	int peek();
	int getLength();  
	bool isEmpty();


	string toString();
};

