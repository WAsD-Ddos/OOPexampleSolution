
#include "Manager.h"




int main() {
	int count;
	cout << "input number of students: " << endl;
	cin >> count;
	

	Student* stlist = nullptr;

	Initializer initializer;
	Manager manager;
	initializer.init(stlist, count);
	cout << "full list of students" << endl;
	for ( int i = 0; i < count ; i++)
	{
		cout << stlist[i].toString() << endl;
	}

	int size = 0;
	Student* bestlist = manager.getBestStudents(stlist, count, &size);
	cout << "list of students best" << endl;
	for (int i = 0; i < size; i++)
	{
		cout <<bestlist[i].toString() << endl;
	}

	Student* worstlist = manager.getWorstStudets(stlist, count, &size);
	cout << "list of students worst" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << worstlist[i].toString() << endl;
	}

	delete[] stlist;
	delete[] bestlist;
	delete[]worstlist;
	return 0;
} 