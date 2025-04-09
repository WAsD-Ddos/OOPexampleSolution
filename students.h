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
	Student(string nm) {
		//cout << "construction with argument " << endl;
		name = nm;
		age = 13;
		mark = 4;
		alive = true;

	}
	//canonical construction
	Student(string nm,int a,double m,bool al) {
		//cout << "construction with argument " << endl;
		name = nm;
		age =a;
		mark = m;
		alive = al;

	}
	//construction copy
	Student(const Student& st) {
		//cout << "construction with argument " << endl;
		name = st.name;
		age = st.age;
		mark = st.mark;
		alive = st.alive;

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

