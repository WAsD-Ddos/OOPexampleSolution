#include "Queue.h"

int main() {
	Queue queue;
	cout << "input elements: " << endl;
	int element;
	do {
		cin >> element;
		if (element != 0) {
			queue.enqueue(element);
		}
	} while (element != 0);
	cout << "Queue:\n ";
	while (!queue.isEmpty()) {
		cout << queue.dequeue() << " ";
	}
	return 0;
}