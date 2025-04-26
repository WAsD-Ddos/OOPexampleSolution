
#include "initializer.h"



int main() {
	int count;
	cout << "input number of students: " << endl;
	cin >> count;
	
	Student* stlist = nullptr;

	Initializer initializer;
	initializer.init(stlist, count);

	for ( int i = 0; i < count ; i++)
	{
		cout << stlist[i].toString() << endl;
	}
	return 0;
} 