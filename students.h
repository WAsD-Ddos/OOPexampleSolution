#include "maint.h"

class Student {

public:
	string name;
	int age;
	double mark;
	bool alive;

	//default constructer 
	Student() {
		//cout << "Default-construction " << endl;
		name = "no name";
		age = 13;
		mark = 4;
		alive = 1;
	}
	//constructer with argument
	Student(string nm)  :Student(nm,13,4,true) {
	}
	//canonical construction
	Student(string name,int age,double mark,bool alive) {
		//cout << "construction with argument " << endl;
		this->name = name;
		this->age =age;
		this->mark = mark;
		this->alive = alive;

	}
	//construction copy
	Student(const Student& st) : Student(st.name,st.age,st.mark,st.alive) {
		//cout << "construction with argument " << endl;

	}

	//destructor
	~Student() {
		cout << "destructor..." << endl;
	}



	string toString() {
		string res = "The name pupil : " + name + "\n";
		res += "The age pupil: " + to_string(age) + "\n";
		res += "The mark pupil: " + to_string(mark) + "\n";
		res += "The alive pupil:";
		res += alive ? "yes" : "no";
		res += "\n";
		return res;
	}

};

