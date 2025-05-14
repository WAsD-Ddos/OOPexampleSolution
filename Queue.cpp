#include "Queue.h"


Queue::Queue() {
	queue = nullptr;
	size = 0;
}
Queue::~Queue()
{
	if (queue != nullptr) {
		delete[] queue;
	}
}
bool Queue::isEmpty() {
	return getLength() == 0;
}

int Queue::getLength() {
	return size;
}

void  Queue::enqueue(int element) {
	if (isEmpty()) {
		size = 1;
		queue = new int[size];
		queue[0] = element;
	}
	else
	{
		int* temp = new int[size + 1];
		for (int  i = 0; i < size; i++)
		{
			temp[i] = queue[i];
		}
		temp[size] = element;
		size++;
		delete[] queue;
		queue = temp;
	}
}
int Queue::dequeue() {
	if (!isEmpty()) {
		int first = queue[0];
		size--;
		int* temp = new int[size];

		for (int i = 0; i < size; i++)
		{
			temp[i] = queue[i+1];
		}


		delete[] queue;
		queue = temp;
		return first;
	}
	return 0;

}
int Queue::peek() {
	if (!isEmpty()) {
		return queue[0];
	}
}



string Queue::toString() {
	if (isEmpty()) {
		return "Queue is empty";
	}
	string s = "[";
	for (int i = 0; i < size; i++) {
		if (i != 0) { s += ", "; }
		s += to_string(queue[i]);
	}
	return s += "]";
}