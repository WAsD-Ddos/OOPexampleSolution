#include "Teacher.h"





int main() {
	Student st1("Sasha",15,5.8,true);
	Student st2(st1);

	cout << st1.toString() << endl;
	cout << st2.toString() << endl;

	return 0;
}