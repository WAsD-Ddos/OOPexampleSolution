#include "maint.h"

class Student {

public:
	string name;
	int age;
	double mark;
	bool alive;

	string getString() {
		string res = "The name pupil : " + name + "\n";
		res += "The age pupil: " + to_string(age) + "\n";
		res += "The mark pupil: " + to_string(mark) + "\n";
		res += "The alive pupil:";
		res += alive ? "yes" : "no";
		res += "\n";
		return res;
	}

};

