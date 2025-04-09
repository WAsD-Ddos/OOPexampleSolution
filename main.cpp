#include "Teacher.h"





int main() {

	Student st1{};
	Student st2("saha");
	Student st3("find", 15, 7.8, true);
	Student st4(st2);

	cout << st1.toString() << endl;
	cout << st2.toString() << endl;
	cout << st3.toString() << endl;
	cout << st4.toString() << endl;

	return 0;
}